var goURLAfterAudioAds = false;
var resultAudioAds = "";
var a_ads_time_show_button = 29;
var a_ads_timeSkip = 30;
var a_ads_duration = 30;
var a_ads_timeSkip_tracking = "";
var playerAudioAds = function () {
    console.log("AudioAds");
    try {
        /*
         * xu ly goi quang cao tra ve object json
         */
        var key = "";
        if (typeof playlistKey != "undefined") {
            key = playlistKey;
        } else {
            key = songKey;
        }
        var type_ads = "song";
        if (window.location.href.indexOf("/playlist/") != -1) {
            type_ads = "playlist";
        }
        $.getJSON(NCTInfo.ROOT_URL + "ajax/ads?type=audio_ads&key=" + key + "&type_ads=" + type_ads, {}, function (result) {
            try {

                resultAudioAds = result.data;
                if (typeof (resultAudioAds.Vast) == "undefined") {
                    a_ads_render(result);
                } else {
                    var vastObj = resultAudioAds.Vast;

                    adsConfig._skipOffset = typeof vastObj.SkipOffset == "undefined" ? 7 : vastObj.SkipOffset;
                    adsConfig._advTag = vastObj.Content;
                    adsConfig._typeOvaAdv = 'VAST';
                    idAds = adsConfig._adId = vastObj.BId;
                    keyAds = vastObj.Key;
                    result.data.ImageSource = resultAudioAds.ImageSource;
                    a_ads_render_vast(result);
                }

            } catch (e) {
                a_ads_finish();
            }
        });
        //playerAudioAdsShowed = true;
        //} else {
        //a_ads_finish();
        //}
    } catch (e) {
        console.log("Error: playerAudioAds - " + e);
        a_ads_finish();
    }
};


var a_ads_render = function (object) {
    try {
        var item = object.data;
        if (object.status && item.MediaSource != "") {

            a_ads_timeSkip = 30;
            a_ads_time_show_button = 29;

            if (typeof (item.TimeSkip) != "undefined" && !isNaN(item.TimeSkip) && item.TimeSkip != "") {
                a_ads_time_show_button = item.TimeSkip;
            }

            a_ads_timeSkip_tracking = item.TrackingSkip;

            var html = '<audio id="a_ads_media" autoplay>'
                    + '<source src="' + item.MediaSource + '" type="audio/mp3">'
                    + '</audio>'
                    + '<div id="box_a_ads" class="box_a_ads">'
                    + '<div class="a_ads">'
                    + '<div class="bg"></div>'
                    + '<div class="bg_black"></div>'
                    + '<div class="a_ads_banner">';
            if (item.ImageSource.toString().indexOf(".html") != -1) {
                html += "<iframe scrolling=\"no\" class=\"htmlbanner\" src=\"" + item.ImageSource + "\"></iframe>";
            } else {
                html += '<a href="' + item.TrackingClick + '" target="_blank"><img src="' + item.ImageSource + '"></a>';
            }
            html += '<div id="a_ads_skip_button" style="display:none;">Bỏ qua</div>'
                    + '</div>'
                    + '<div class="box_playcontrol">'
                    + '<div id="a_ads_progress_bar" class="progress_bar"></div>'
                    + '<div id="a_ads_progress_run" class="progress_run" style="width: 0%"></div>'
                    //+ '<span id="a_ads_playPause" class="play pause"></span>'
                    + '<div class="time_song" style="left: 20px;">'
                    + '<span id="a_ads_current_time">00:00</span>'
                    + '<span id="a_ads_total_time">00:00</span>'
                    + '</div>'
                    + '<p id="a_ads_showtimeSkip" class="timeSkip"></p>'
                    + '</div>'
                    + '</div>'
                    + '<img id="trackingImageAudioAds" style="width: 1px; height: 1px;" src="' + item.TrackingImpression + '" />';
            //console.log("TrackingImpression", item.TrackingImpression);
            if (typeof item.TrackingPartner != "undefined") {
                html += '<img style="width: 1px; height: 1px;" src="' + item.TrackingPartner + '" />';
                //console.log("TrackingPartner", item.TrackingPartner);
            }

            html += '</div>';

            if ($("#flashPlayer").append(html)) {
                a_ads_setevent();
            }

        } else {
            if (OPEN_SENTRY)
                Raven.captureMessage("Error audio ads: null " + JSON.stringify(object));
            a_ads_finish();
        }
    } catch (e) {
        document.getElementById("trackingImageAudioAds").src = resultAudioAds.TrackingError;
        if (OPEN_SENTRY)
            Raven.captureException(e);
        console.log("Error: render ads - " + e);
        a_ads_finish();
    }
};

var a_ads_finish = function () {
    console.log("Finish load media");
    $("#box_a_ads").remove();
    $("#a_ads_media").remove();
    if (window.location.href.indexOf("/bai-hat/") != -1 && autoplay.optionAutoplay) {
        window.location = autoplay.url;
    } else if (goURLAfterAudioAds) {
        window.location = autoplay.url;
    } else {
        $("#mp3flashPlayer").trigger("playMp3");

        /*
         * smarty
         */
        try {
            var dataTracking = {
                action: "getInfoTracking",
                t: "song",
                key: __data['flashPlayer'].curMp3Item.key,
                mineKey: NCTInfo.mineKey
            };
            var repeatOne = "repeat_one";
            if (__data["flashPlayer"].peConfig.repeatStatus == "no") {
                repeatOne = "not_repeat";
            } else if (__data["flashPlayer"].peConfig.repeatStatus == "no") {
                repeatOne = "repeat_all";
            }
            var curQua = __data["flashPlayer"].curQuality;
            var dur = document.getElementById("mp3" + "flashPlayer").duration;
            var paused = document.getElementById("mp3" + "flashPlayer").paused;
            var playlist = typeof (idDownloadTracking) != "undefined" && window.location.href.indexOf("/playlist/") != -1 ? idDownloadTracking : "null";
            $.post(NCTInfo.ROOT_URL + "ajax/playlist", dataTracking, function (result) {
                trackingSmarty.mp3_player_play(result.data.id_tracking, playlist, repeatOne, "null", "null", dur, curQua);
            }, "json");
        } catch (e) {

        }

        console.log("click play button");
    }

    $("#audio_a_ads").remove();
};

var a_ads_setevent = function () {
    try {

        var statusDowntime = false;
        var a_ads_timeload_Skip = 10;
        var a_ads_media = document.getElementById("a_ads_media");
        //var a_ads_progress_bar = document.getElementById("a_ads_progress_bar");
        var a_ads_progress_run = document.getElementById("a_ads_progress_run");
        //var a_ads_playPause = document.getElementById("a_ads_playPause");
        var a_ads_current_time = document.getElementById("a_ads_current_time");
        var a_ads_total_time = document.getElementById("a_ads_total_time");
        var a_ads_showtimeSkip = document.getElementById("a_ads_showtimeSkip");

        a_ads_media.volume = 0.8;
//        var a_ads_fplayPause = function () {
//            if (a_ads_media.paused) {
//                a_ads_media.play();
//                $(".a_ads .box_playcontrol .play").addClass("pause");
//            } else {
//                a_ads_media.pause();
//                $(".a_ads .box_playcontrol .play").removeClass("pause");
//            }
//        };

        /*
         * 
         * @type tracking variable
         */
        var track25 = true;
        var track50 = true;
        var track75 = true;
        var track100 = true;

        var width_progress_run = 0;
        var width_progress_run_p = 0;

        var a_ads_timeUpdateMusic = function () {
            a_ads_total_time.innerHTML = putils.formatTime(a_ads_media.duration);
            a_ads_current_time.innerHTML = putils.formatTime(a_ads_media.currentTime) + " / ";
            width_progress_run = (a_ads_media.currentTime * 100) / a_ads_media.duration;
            a_ads_progress_run.setAttribute("style", "width: " + width_progress_run + "%");
            /*
             * tracking
             */
            if (track25 && width_progress_run >= 25
                    && typeof (resultAudioAds.TrackingQuarter) != "undefined"
                    && resultAudioAds.TrackingQuarter != "") {
                try {
                    track25 = false;
                    document.getElementById("trackingImageAudioAds").src = resultAudioAds.TrackingQuarter;
                    console.log("25%", resultAudioAds.TrackingQuarter);
                } catch (e) {
                    console.log(e);
                }
            }
            if (track50 && width_progress_run >= 50
                    && typeof (resultAudioAds.TrackingMiddle) != "undefined"
                    && resultAudioAds.TrackingMiddle != "") {
                try {
                    track50 = false;
                    document.getElementById("trackingImageAudioAds").src = resultAudioAds.TrackingMiddle;
                    console.log("50%", resultAudioAds.TrackingMiddle);
                } catch (e) {
                    console.log(e);
                }
            }
            if (track75 && width_progress_run >= 75
                    && typeof (resultAudioAds.TrackingThreeQuarter) != "undefined"
                    && resultAudioAds.TrackingThreeQuarter != "") {
                try {
                    track75 = false;
                    document.getElementById("trackingImageAudioAds").src = resultAudioAds.TrackingThreeQuarter;
                    console.log("75%", resultAudioAds.TrackingThreeQuarter);
                } catch (e) {
                    console.log(e);
                }
            }
            if (track100 && width_progress_run >= 92
                    && typeof (resultAudioAds.TrackingComplete) != "undefined"
                    && resultAudioAds.TrackingComplete != "") {
                try {
                    track100 = false;
                    document.getElementById("trackingImageAudioAds").src = resultAudioAds.TrackingComplete;
                    console.log("100%", resultAudioAds.TrackingComplete);
                } catch (e) {
                    console.log(e);
                }
            }
        };

        a_ads_media.addEventListener("loadeddata", function () {
            if ($("#playButtonflashPlayer").hasClass("pause")) {
                $("#playButtonflashPlayer").click();
            }
            setInterval(a_ads_timeUpdateMusic, 100);
            if (a_ads_media.duration < 30 && a_ads_media.duration < a_ads_timeSkip) {
                a_ads_timeSkip = Math.round(a_ads_media.duration - 0.05);
                a_ads_duration = Math.round(a_ads_media.duration - 0.05);
            }
            statusDowntime = true;
        });
        //a_ads_playPause.addEventListener("click", a_ads_fplayPause);



        var a_ads_intimeSkip = setInterval(function () {
            if (statusDowntime) {
                --a_ads_timeSkip;
                a_ads_showtimeSkip.innerHTML = "Quảng cáo sẽ tắt trong " + a_ads_timeSkip + "s";
                if (a_ads_timeSkip <= -1) {
                    a_ads_finish();
                    clearInterval(a_ads_intimeSkip);
                }
                if (a_ads_timeSkip < (a_ads_duration - a_ads_time_show_button)) {
                    $("#a_ads_skip_button").show();
                    console.log("show");
                }

            } else {
                --a_ads_timeload_Skip;
                if (a_ads_timeload_Skip <= -1) {
                    a_ads_finish();
                    clearInterval(a_ads_intimeSkip);
                }
            }
        }, 1000);

        $("#a_ads_skip_button").click(function () {
            document.getElementById("trackingImageAudioAds").src = a_ads_timeSkip_tracking;
            a_ads_finish();
            clearInterval(a_ads_intimeSkip);
        });
    } catch (e) {
        if (OPEN_SENTRY)
            Raven.captureException(e);
        console.log("Error: render ads - " + e);
        a_ads_finish();
    }
};

