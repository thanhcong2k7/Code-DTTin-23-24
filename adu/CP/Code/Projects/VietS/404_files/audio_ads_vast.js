//var playerAudioAdsVast = function () {
//    try {
//        /*
//         * xu ly goi quang cao tra ve object json
//         */
//        var key = "";
//        if (typeof playlistKey != "undefined") {
//            key = playlistKey;
//        } else {
//            key = songKey;
//        }
//        var type_ads = "song";
//        if (window.location.href.indexOf("/playlist/") != -1) {
//            type_ads = "playlist";
//        }
//        $.getJSON(NCTInfo.ROOT_URL + "ajax/ads?type=audio_ads&key=" + key + "&type_ads=" + type_ads, {}, function (result) {
//            try {
//                adsConfig._skipOffset = 5;
//                adsConfig._advTag = 'http://test-places.gammassp.com/test_only/vast/vast_wrapper_mp3.xml';
//                adsConfig._typeOvaAdv = 'VAST';
//                idAds = adsConfig._adId = 'VASTdemo';
//                keyAds = "abc";
//                result.data.ImageSource = "";
//
//                resultAudioAds = result.data;
//                a_ads_render_vast(result);
//            } catch (e) {
//                console.log("dong 24", e);
//                a_ads_finish();
//            }
//        });
//    } catch (e) {
//        console.log("Error: playerAudioAdsVAST - " + e);
//        a_ads_finish();
//    }
//};

var _keyAds = "";
var _adId = "";
var a_ads_render_vast = function (object) {
    try {
        var item = object.data;

        var html = '<audio id="audio_a_ads" autoplay>'
                + '<source src="" type="audio/mp3">'
                + '</audio>'
                + '<div id="box_a_ads" class="box_a_ads">'
                + '<div class="a_ads">'
                + '<div class="bg"></div>'
                + '<div class="bg_black"></div>'
                + '<div id=\"VastImageLoadAudioAds\" class="a_ads_banner">';

//        html += '<a href="https://www.nhaccuatui.com/nhaccuatui-vip/mua-vip" target="_blank"><img src="' + NCTInfo.STATIC_URL + 'html5/nct-player-mp3/images/ads_no_image_vast.jpg"></a>';

        if (item.Vast.ImageSource.toString().indexOf(".html") != -1) {
            html += "<iframe id=\"VastImageLoadAudioAdsIframe\" scrolling=\"no\" class=\"htmlbanner\" src=\"" + item.Vast.ImageSource + "\"></iframe>";
        } else {
            html += '<a id=\"VastImageLoadAudioAdsImage\" href="' + item.Vast.ImageClick + '" target="_blank"><img src="' + item.Vast.ImageSource + '"></a>';
        }

        html += '<div id="btnSkip_a_ads" style="display:none;"><span id="txtSkip_a_ads"></span></div>'
                + '</div>'
                + '<div id="controlBar_a_ads" class="box_playcontrol">'
                + '<div id="btnPlay_a_ads" class="btnPlay" ></div>'
                + '<div id="a_ads_progress_bar" class="progress_bar"></div>'
                + '<div id="a_ads_progress_run" class="progress_run" style="width: 100%"></div>'
                //+ '<span id="a_ads_playPause" class="play pause"></span>'
                + '<div class="time_song" style="left: 20px;">'
                + '<span id="a_ads_current_time">00:00</span>'
                + '<span id="a_ads_total_time">00:00</span>'
                + '</div>'
                + '<p id="countdown_a_ads" class="timeSkip"></p>'
                + '</div>'
                + '<div id="btnVolumne_a_ads" class="btnVolumne"></div>'
                + '</div>'
                + '<div id="imgTracking_a_ads"></div>';
        //console.log("TrackingImpression", item.TrackingImpression);
        if (typeof item.TrackingPartner != "undefined") {
            html += '<img style="width: 1px; height: 1px;" src="' + item.TrackingPartner + '" />';
            //console.log("TrackingPartner", item.TrackingPartner);
        }

        html += '</div>';

        if ($("#flashPlayer").append(html)) {
            var a_ads_media = document.getElementById("audio_a_ads");
            var a_ads_current_time = document.getElementById("a_ads_current_time");
            var a_ads_total_time = document.getElementById("a_ads_total_time");
            var width_progress_run = 0;
            var a_ads_progress_run = document.getElementById("a_ads_progress_run");
            var a_ads_timeUpdateMusic = function () {
                a_ads_total_time.innerHTML = putils.formatTime(a_ads_media.duration);
                a_ads_current_time.innerHTML = putils.formatTime(a_ads_media.currentTime) + " / ";
                width_progress_run = (a_ads_media.currentTime * 100) / a_ads_media.duration;
                a_ads_progress_run.setAttribute("style", "width: " + width_progress_run + "%");
            };
            a_ads_media.addEventListener("loadeddata", function () {
                if ($("#playButtonflashPlayer").hasClass("pause")) {
                    $("#playButtonflashPlayer").click();
                }
                setInterval(a_ads_timeUpdateMusic, a_ads_media.duration / 100);
            });

            var vast = new NCTPreroll();
            vast.load("_a_ads");
        }
    } catch (e) {
        console.log("Error: render ads ", e);
        //document.getElementById("trackingImageAudioAds").src = resultAudioAds.TrackingError;
        $("#imgTracking" + pe).append('<img src="' + resultAudioAds.TrackingError + '" />');
        if (OPEN_SENTRY)
            Raven.captureException(e);

        a_ads_finish();
    }
};

//var a_ads_finish = function () {
//    console.log("Finish load media");
//    $("#box_a_ads").remove();
//    $("#a_ads_media").remove();
//    $("#audio_a_ads").remove();
//    $("#playButtonflashPlayer").click();
//};

//var a_ads_setevent = function () {
//    try {
//        var a_ads_timeSkip = 15;
//
//        var a_ads_media = document.getElementById("a_ads_media");
//        //var a_ads_progress_bar = document.getElementById("a_ads_progress_bar");
//        var a_ads_progress_run = document.getElementById("a_ads_progress_run");
//        var a_ads_playPause = document.getElementById("a_ads_playPause");
//        var a_ads_current_time = document.getElementById("a_ads_current_time");
//        var a_ads_total_time = document.getElementById("a_ads_total_time");
//        var a_ads_showtimeSkip = document.getElementById("a_ads_showtimeSkip");
//
//        var a_ads_fplayPause = function () {
//            if (a_ads_media.paused) {
//                a_ads_media.play();
//                $(".a_ads .box_playcontrol .play").addClass("pause");
//            } else {
//                a_ads_media.pause();
//                $(".a_ads .box_playcontrol .play").removeClass("pause");
//            }
//        };
//
//        var width_progress_run = 0;
//        var a_ads_timeUpdateMusic = function () {
//            a_ads_total_time.innerHTML = putils.formatTime(a_ads_media.duration);
//            a_ads_current_time.innerHTML = putils.formatTime(a_ads_media.currentTime) + " / ";
//            width_progress_run = (a_ads_media.currentTime * 100) / a_ads_media.duration;
//            a_ads_progress_run.setAttribute("style", "width: " + width_progress_run + "%");
//        };
//
//        a_ads_media.addEventListener("loadeddata", function () {
//            setInterval(a_ads_timeUpdateMusic, a_ads_media.duration / 100);
//            if (a_ads_media.duration < a_ads_timeSkip) {
//                a_ads_timeSkip = Math.round(a_ads_media.duration - 0.05);
//            }
//        });
//        a_ads_playPause.addEventListener("click", a_ads_fplayPause);
//
//        var a_ads_intimeSkip = setInterval(function () {
//            if (a_ads_media.duration > 0 && !a_ads_media.paused) {
//                --a_ads_timeSkip;
//                a_ads_showtimeSkip.innerHTML = "Quảng cáo sẽ tắt trong " + a_ads_timeSkip + "s";
//                if (a_ads_timeSkip === 0) {
//                    //a_ads_finish();
//                    clearInterval(a_ads_intimeSkip);
//                }
//            }
//        }, 1000);
//
//
//    } catch (e) {
//        console.log("Error: render ads - " + e);
//        a_ads_finish();
//    }
//};

function addArrItems(k, arr, query) {
    for (var i = 0; i < k; i++) {
        arr.push(query[i]);
    }
    return arr;
}

var checkOffsound = true;
var NCTPreroll = function () {
    var linkClickThrough;
    var linkClickTracking = [];
    var arrFirstQuartile = [];
    var arrMidPointQuartile = [];
    var arrThirdQuartile = [];
    var arrComplete = [];
    var arrMute = [];
    var arrUnmute = [];
    var arrPause = [];
    var arrResume = [];
    var arrFullscreen = [];
    var arrExitFullscreen = [];
    var arrClose = [];
    var arrCreativeView = [];
    var arrStart = [];
    var durationPreroll;
    var arrImpression = [];
    var arrError = [];
    var secSkip;
    var timer;
    var isCheckVol = false;
    var isCheckFrist = false;
    var isCheckMid = false;
    var isCheckThir = false;
    var isCheckFinish = false;
    var lengthVid;
    var txtInfo;
    var linkVast;
    var myTimerAdTime;
    var NCTEvent = {
        adError: "onAdError",
        adShow: "onAdShow",
        adComplete: "onAdComplete",
        adTime: "onAdTime",
        adSkip: "onAdSkipped",
    };

    var _oTracking = {};

    this.load = function (pe) {
        var checkFinish = true;
        var finishPreroll = function () {
            if (checkFinish) {
                checkFinish = false;
                console.log("row 240");
                a_ads_finish();
            }
        };


        var player = document.getElementById("audio" + pe);
        var btnSkip = document.getElementById("btnSkip" + pe);
        var btnVolumne = document.getElementById("btnVolumne" + pe);
        var btnFullscreen = document.getElementById("btnFullscreen" + pe);
        var mcControlBar = document.getElementById("controlBar" + pe);
        var trackingEvent = document.getElementById("imgTracking" + pe);

        if (putils.isSafariMacOS11()) {
            player.volume = 0;
        }

        secSkip = typeof adsConfig.skipOffset() != "undefined" ? adsConfig.skipOffset() : 7;
        txtInfo = typeof adsConfig.txtInfo() != "undefined" ? adsConfig.txtInfo() : "Quảng cáo sẽ tự động tắt trong xxxx giây";

        linkVast = adsConfig.advTag().replace("[timestamp]", new Date().getTime() + "" + Math.floor((Math.random() * 100) + 1));
        linkVast = linkVast.replace("[referrer_url]", encodeURIComponent(('https:' == document.location.protocol ? 'https://' : 'http://') + "www.nhaccuatui.com/"));
        //linkVast = linkVast.replace("[description_url]", "%5Bdescription_url%5D") + "&sdkv=h.3.123.0";
        if (linkVast.indexOf("adserver.adtech.de") != -1) {

        } else if (window.location.href.indexOf("description_url") != -1) {
            linkVast = linkVast.replace("[description_url]", encodeURIComponent(window.location.href)) + "&sdkv=h.3.128.2&osd=2";
        }
        //linkVast = linkVast.replace("[description_url]", "&sdkv=h.3.128.2&hl=vi&sdki=5&osd=2&frm=2&sdr=1&mpt=h5_vsi");
        //linkVast = linkVast.replace("[description_url]", "&eid=41351032&sdkv=h.3.128.2&sdki=5&scor=4488721110917264&adk=4018648594&osd=2&frm=2&sdr=1&mpt=h5_vsi&afvsz=200x200%2C250x250%2C300x250%2C336x280%2C450x50%2C468x60%2C480x70");

        linkVast = linkVast.replace("[content-page-url]", encodeURIComponent(window.location.href));

        linkVast = linkVast.replace(/\s+/g, '');

        _oTracking.adId = adsConfig.adId;

        console.log(linkVast);

        DMVAST.client.get(linkVast, function (response) {
            try {
                console.log(response);
                if (!response || typeof response == "undefined") {
                    console.log("response null");
                    finishPreroll();
                }
                //console.log("response.ads.length " + response.ads.length);
                for (var adIdx = 0, adLen = response.ads.length; adIdx < adLen; adIdx++) {
                    var ad = response.ads[adIdx];
                    //console.log("impression " + ad.descriptionURLTemplates);
                    try {
                        if (typeof ad.impressionURLTemplates != "undefined") {
                            addArrItems(ad.impressionURLTemplates.length, arrImpression, ad.impressionURLTemplates);
                        }
                        if (typeof ad.errorURLTemplates != "undefined") {
                            addArrItems(ad.errorURLTemplates.length, arrError, ad.errorURLTemplates);
                        }
                    } catch (e) {
                        console.log(e);
                    }
                    //console.log(arrImpression);
                    try {
                        //console.log(ad.creatives.length);
                        var countCrea = 0;
                        for (var creaIdx = 0, creaLen = ad.creatives.length; creaIdx < creaLen; creaIdx++) {
                            //console.log("creaLen " + creaLen);
                            countCrea++;
                            var creative = ad.creatives[creaIdx];
                            //console.log("creative creaIdx " + creaIdx);
//                                console.log("creative.type " + creative.type);
                            switch (creative.type) {
                                case "linear":

                                    function trackingNCT(event) {

                                        if (event == NCTEvent.adShow) {
                                            console.log("onAdShow");
                                            adsTracking.onAdShow(_oTracking);
                                        } else if (event == NCTEvent.adSkip) {
                                            adsTracking.onAdSkipped(_oTracking);
                                        } else if (event == NCTEvent.adTime) {
                                            adsTracking.onAdTime(_oTracking);
                                        } else if (event == NCTEvent.adComplete) {
                                            adsTracking.onAdComplete(_oTracking);
                                        } else if (event == NCTEvent.adError) {
                                            adsTracking.onAdError(_oTracking);
                                        }
                                    }

                                    function TimerAdTime() {
                                        //console.log("TimerAdTime " + Math.round(player.currentTime));
                                        _oTracking.position = Math.round(player.currentTime);
                                        trackingNCT(NCTEvent.adTime);
                                    }

                                    function stopTimerAdTime() {
                                        clearInterval(myTimerAdTime);
                                        //console.log("stopTimerAdTime");
                                    }

                                    function onClickSkip() {
                                        btnSkip.disabled = false;
                                        player.pause();
                                        onPushTracking(arrClose);
                                        trackingNCT(NCTEvent.adSkip);
                                        stopTimerAdTime();
                                        console.log("onClickBQ");
                                        finishPreroll();
                                    }

                                    function onClickTAG() {
                                        //player.pause();
                                        onPushTracking(linkClickTracking);
                                        //onPushTracking(arrPause);
                                        //btnPlay.style.backgroundImage = "url('img/nowplaying_icon_play.png')";
                                        //$("#btnPlay" + pe).removeClass("pause");
                                        window.open(linkClickThrough);
                                    }
                                    if (putils.isMobileDevice()) {
                                        $("#audio" + pe).hide();
                                    }

                                    function onEndedAudio() {
                                        console.log("onEndedAudio", isCheckFinish);
                                        if (!isCheckFinish) {
                                            console.log("isCheckFinishEnd");
                                            onPushTracking(arrComplete);
                                            trackingNCT(NCTEvent.adComplete);
                                            isCheckFinish = true;
                                        }
                                        $("#btnSkip" + pe).show();
                                        _oTracking.position = Math.round(player.currentTime);
                                        //player.src=('https:' == document.location.protocol ? 'https://' : 'http://') + "vjs.zencdn.net/v/oceans.mp4";
                                        //player.play();
                                        setTimeout(function () {
                                            console.log("finishPreroll end video");
                                            finishPreroll();
                                        }, 1000);
                                    }

                                    function onErrorAudio(e) {
//                                            switch (e.target.error.code) {
//                                                case e.target.error.MEDIA_ERR_ABORTED:
//                                                    alert('You aborted the video playback.');
//                                                    break;
//                                                case e.target.error.MEDIA_ERR_NETWORK:
//                                                    alert('A network error caused the video download to fail part-way.');
//                                                    break;
//                                                case e.target.error.MEDIA_ERR_DECODE:
//                                                    alert('The video playback was aborted due to a corruption problem or because the video used features your browser did not support.');
//                                                    break;
//                                                case e.target.error.MEDIA_ERR_SRC_NOT_SUPPORTED:
//                                                    alert('The video could not be loaded, either because the server or network failed or because the format is not supported.');
//                                                    break;
//                                                default:
//                                                    alert('An unknown error occurred.');
//                                                    break;
//                                            }
                                        onPushTracking(arrError);
                                        _oTracking.error = "Wrong type VAST";
                                        trackingNCT(NCTEvent.adError);
                                        console.log("finishPreroll wrong");
                                        finishPreroll();
                                    }

                                    function onTimeUpdateAudio() {
                                        //console.log("TimeUpdate");
                                        var count = lengthVid - Math.round(player.currentTime);
                                        var temp = adsConfig.txtInfo();
                                        temp = temp.replace("xxxx", Math.round(count));
                                        $("#countdown" + pe).html(temp);
                                        if (Math.round(count) == -3) {
                                            if (Math.round(player.currentTime) >= Math.round((player.duration / 100) * 80)) {
                                                if (!isCheckFinish) {
                                                    console.log("isCheckFinish");
                                                    onPushTracking(arrComplete);
                                                    trackingNCT(NCTEvent.adComplete);
                                                    isCheckFinish = true;
                                                }
                                            }
                                            //console.log("finishPreroll onTimeUpdateAudio");
                                            finishPreroll();
                                        }

                                        _oTracking.duration = player.duration;

                                        var fristPoint = Math.round((player.duration / 100) * 25);
                                        var secondPoint = Math.round((player.duration / 100) * 50);
                                        var thirdPoint = Math.round((player.duration / 100) * 75);

                                        //    console.log(fristPoint + " " + secondPoint + " " +thirdPoint);

                                        if (Math.round(player.currentTime) == fristPoint) {
                                            if (!isCheckFrist) {
                                                isCheckFrist = true;
                                                onPushTracking(arrFirstQuartile);
                                            }
                                        } else if (Math.round(player.currentTime) == secondPoint) {
                                            if (!isCheckMid) {
                                                onPushTracking(arrMidPointQuartile);
                                                isCheckMid = true;
                                            }
                                        } else if (Math.round(player.currentTime) == thirdPoint) {
                                            if (!isCheckThir) {
                                                onPushTracking(arrThirdQuartile);
                                                isCheckThir = true;
                                            }
                                        }
                                    }

                                    function onPushTracking(arr) {
                                        try {
                                            for (var i = 0; i < arr.length; i++) {
                                                //console.log("onPushTracking : " + arr[i]);
                                                //trackingEvent.src = arr[i];
                                                //console.log(pe, arr[i]);
                                                console.log("Log", arr[i]);
                                                $("#imgTracking" + pe).append('<img src="' + arr[i] + '" />');
                                                //$.getJSON(arr[i], {}, function () {
                                                //});
                                            }
                                        } catch (e) {

                                        }
                                    }

                                    function onCanPlayAudio() {
                                        //console.log("canplay");
                                        lengthVid = player.duration;
                                        // console.log("length "+ lengthVid);
                                        //if (lengthVid > 30) {
                                        //lengthVid = 30;
                                        //} else {
                                        //lengthVid = player.duration;
                                        //}
                                        var _player = player;
                                        timer = setInterval(function () {
                                            secSkip--;
                                            console.log(secSkip, "#btnSkip" + pe);
                                            if (secSkip < 1) {
                                                clearInterval(timer);
                                                btnSkip.addEventListener("click", onClickSkip);
                                                try {
                                                    document.getElementById("txtSkip" + pe).innerHTML = "Bỏ qua";
                                                } catch (e) {

                                                }
                                                $("#btnSkip" + pe).show();
                                            }
                                        }, 1000);
                                    }

                                    //console.log("mfLen " +creative.mediaFiles.length);
                                    //creative.trackingEvents.close.length
                                    if (typeof creative.trackingEvents.firstQuartile != "undefined") {
                                        addArrItems(creative.trackingEvents.firstQuartile.length, arrFirstQuartile, creative.trackingEvents.firstQuartile);
                                    }
                                    if (typeof creative.trackingEvents.midpoint != "undefined") {
                                        addArrItems(creative.trackingEvents.midpoint.length, arrMidPointQuartile, creative.trackingEvents.midpoint);
                                    }
                                    if (typeof creative.trackingEvents.thirdQuartile != "undefined") {
                                        addArrItems(creative.trackingEvents.thirdQuartile.length, arrThirdQuartile, creative.trackingEvents.thirdQuartile);
                                    }
                                    if (typeof creative.trackingEvents.complete != "undefined") {
                                        addArrItems(creative.trackingEvents.complete.length, arrComplete, creative.trackingEvents.complete);
                                    }
                                    if (typeof creative.trackingEvents.mute != "undefined") {
                                        addArrItems(creative.trackingEvents.mute.length, arrMute, creative.trackingEvents.mute);
                                    }
                                    if (typeof creative.trackingEvents.unmute != "undefined") {
                                        addArrItems(creative.trackingEvents.unmute.length, arrUnmute, creative.trackingEvents.unmute);
                                    }
                                    if (typeof creative.trackingEvents.pause != "undefined") {
                                        addArrItems(creative.trackingEvents.pause.length, arrPause, creative.trackingEvents.pause);
                                    }
                                    if (typeof creative.trackingEvents.resume != "undefined") {
                                        addArrItems(creative.trackingEvents.resume.length, arrResume, creative.trackingEvents.resume);
                                    }
                                    if (typeof creative.trackingEvents.fullscreen != "undefined") {
                                        addArrItems(creative.trackingEvents.fullscreen.length, arrFullscreen, creative.trackingEvents.fullscreen);
                                    }
                                    if (typeof creative.trackingEvents.exitFullscreen != "undefined") {
                                        addArrItems(creative.trackingEvents.exitFullscreen.length, arrExitFullscreen, creative.trackingEvents.exitFullscreen);
                                    }
                                    if (typeof creative.trackingEvents.close != "undefined") {
                                        addArrItems(creative.trackingEvents.close.length, arrClose, creative.trackingEvents.close);
                                    }
                                    if (typeof creative.trackingEvents.start != "undefined") {
                                        addArrItems(creative.trackingEvents.start.length, arrStart, creative.trackingEvents.start);
                                    }
                                    if (typeof creative.trackingEvents.creativeView != "undefined") {
                                        addArrItems(creative.trackingEvents.creativeView.length, arrCreativeView, creative.trackingEvents.creativeView);
                                    }

                                    durationPreroll = creative.duration;
                                    try {
                                        linkClickThrough = creative.videoClickThroughURLTemplate.trim();
                                    } catch (e) {
                                    }
                                    try {
                                        linkClickTracking = creative.videoClickTrackingURLTemplates.trim();
                                    } catch (e) {
                                    }

                                    trackingNCT(NCTEvent.adShow);
                                    var countAdv = 0;
                                    for (var mfIdx = 0, mfLen = creative.mediaFiles.length; mfIdx < mfLen; mfIdx++) {
                                        var mediaFile = creative.mediaFiles[mfIdx];

                                        //console.log(mediaFile.fileURL);

                                        if (mediaFile.mimeType != "audio/mpeg" || countAdv == 1)
                                            continue;

                                        countAdv++;

                                        player.src = mediaFile.fileURL;

                                        onPushTracking(arrImpression);
                                        onPushTracking(arrCreativeView);


                                        if (!putils.isMobileDevice()) {
                                            player.play();
                                        }

                                        trackingNCT(NCTEvent.adPlay);
                                        onPushTracking(arrStart);

                                        myTimerAdTime = setInterval(function () {
                                            TimerAdTime();
                                        }, 1000);

                                        //btnPlay.style.backgroundImage = "url('img/nowplaying_icon_pause.png')";
                                        if (!putils.isMobileDevice()) {
                                            $("#btnPlay" + pe).addClass("pause");
                                            $("#playIcon" + pe).hide();
                                        }

                                        function onPlayingAudio() {
                                            var _player = player;
                                            if (putils.isSafariMacOS11()) {
                                                if (checkOffsound) {
                                                    checkOffsound = false;
                                                    setTimeout(function () {
                                                        //_player.muted = false;
                                                        _player.volume = 0.8;
                                                    }, 2000);
                                                }
                                            }
                                            //player.muted = false;
                                        }
                                        function onLoadAudio() {
                                            player.volume = 0.7;
                                        }

                                        player.addEventListener("playing", onPlayingAudio);
                                        player.addEventListener("loaded", onLoadAudio);
                                        player.addEventListener("ended", onEndedAudio);
                                        player.addEventListener("error", onErrorAudio);
                                        player.addEventListener("timeupdate", onTimeUpdateAudio);
                                        player.addEventListener("canplay", onCanPlayAudio);

                                        player.vastTracker = new DMVAST.tracker(ad, creative);
                                        //console.log("clickthrough" );

                                        btnVolumne.addEventListener("click", onClickVolume);

                                        player.addEventListener("click", onClickTAG);
                                        btnSkip.disabled = false;

                                        function onClickVolume() {
                                            if (!isCheckVol) {
                                                onPushTracking(arrMute);
                                                isCheckVol = true;
                                                player.volume = 0;
                                                //btnVolumne.style.backgroundImage = "url('img/mute.png')";
                                                $("#btnVolumne" + pe).addClass("mute");
                                            } else {
                                                onPushTracking(arrUnmute);
                                                isCheckVol = false;
                                                player.volume = 0.7;
                                                $("#btnVolumne" + pe).removeClass("mute");
                                                //btnVolumne.style.backgroundImage = "url('img/volumne.png')";
                                            }
                                            //console.log("onClickVolume");
                                        }


                                        function onRemoveAllEvent() {
                                            console.log("removeall");
                                            player.removeEventListener("playing", onPlayingAudio);
                                            player.removeEventListener("loaded", onPlayingAudio);
                                            player.removeEventListener("ended", onEndedAudio);
                                            player.removeEventListener("error", onErrorAudio);
                                            player.removeEventListener("timeupdate", onTimeUpdateAudio);
                                            player.removeEventListener("canplay", onCanPlayAudio);
                                            player.removeEventListener("click", onClickTAG);
                                        }
                                        $("#audio" + pe).bind("removeAllEvent", onRemoveAllEvent);
                                    }

                                    if (countAdv == 0) {
                                        //console.log("countAdv");
                                        finishPreroll();
                                    }

                                    break;

                                case "companion":
                                    try {
                                        console.log("-----------------------------------------------");
                                        console.log(creative);
                                        console.log(creative.variations[0]);

                                        var imgObject = creative.variations[0];

                                        var clickImageURL = "";
                                        try {
                                            clickImageURL = imgObject.companionClickThroughURLTemplate.trim();
                                        } catch (ex) {
                                            clickImageURL = "";
                                        }

                                        var clickImageTracking = "";
                                        try {
                                            clickImageTracking = imgObject.companionClickTrackingURLTemplate.trim();
                                        } catch (ex) {
                                            clickImageTracking = "";
                                        }

                                        var imageSource = imgObject.staticResource.trim();

                                        if ($("#VastImageLoadAudioAdsIframe").remove()) {
                                            if ($("#VastImageLoadAudioAdsImage").remove()) {
                                                var htmlTemp = '<a id=\"VastImageLoadAudioAdsImage\" href="' + clickImageURL + '" target="_blank"><img src="' + imageSource + '"></a>';
                                                if ($("#VastImageLoadAudioAds").prepend(htmlTemp)) {
                                                    $("#VastImageLoadAudioAdsImage").click(function () {
                                                        $("#imgTracking" + pe).append('<img src="' + clickImageTracking + '" />');
                                                    });
                                                }
                                            }
                                        }
                                        
                                        if (typeof creative.trackingEvents.firstQuartile != "undefined") {
                                            addArrItems(imgObject.trackingEvents.firstQuartile.length, arrFirstQuartile, imgObject.trackingEvents.firstQuartile);
                                        }
                                        if (typeof imgObject.trackingEvents.midpoint != "undefined") {
                                            addArrItems(imgObject.trackingEvents.midpoint.length, arrMidPointQuartile, imgObject.trackingEvents.midpoint);
                                        }
                                        if (typeof imgObject.trackingEvents.thirdQuartile != "undefined") {
                                            addArrItems(imgObject.trackingEvents.thirdQuartile.length, arrThirdQuartile, imgObject.trackingEvents.thirdQuartile);
                                        }
                                        if (typeof imgObject.trackingEvents.complete != "undefined") {
                                            addArrItems(imgObject.trackingEvents.complete.length, arrComplete, imgObject.trackingEvents.complete);
                                        }
                                        if (typeof imgObject.trackingEvents.mute != "undefined") {
                                            addArrItems(imgObject.trackingEvents.mute.length, arrMute, imgObject.trackingEvents.mute);
                                        }
                                        if (typeof imgObject.trackingEvents.unmute != "undefined") {
                                            addArrItems(imgObject.trackingEvents.unmute.length, arrUnmute, imgObject.trackingEvents.unmute);
                                        }
                                        if (typeof imgObject.trackingEvents.pause != "undefined") {
                                            addArrItems(imgObject.trackingEvents.pause.length, arrPause, imgObject.trackingEvents.pause);
                                        }
                                        if (typeof imgObject.trackingEvents.resume != "undefined") {
                                            addArrItems(imgObject.trackingEvents.resume.length, arrResume, imgObject.trackingEvents.resume);
                                        }
                                        if (typeof imgObject.trackingEvents.fullscreen != "undefined") {
                                            addArrItems(imgObject.trackingEvents.fullscreen.length, arrFullscreen, imgObject.trackingEvents.fullscreen);
                                        }
                                        if (typeof imgObject.trackingEvents.exitFullscreen != "undefined") {
                                            addArrItems(imgObject.trackingEvents.exitFullscreen.length, arrExitFullscreen, imgObject.trackingEvents.exitFullscreen);
                                        }
                                        if (typeof imgObject.trackingEvents.close != "undefined") {
                                            addArrItems(imgObject.trackingEvents.close.length, arrClose, imgObject.trackingEvents.close);
                                        }
                                        if (typeof imgObject.trackingEvents.start != "undefined") {
                                            addArrItems(imgObject.trackingEvents.start.length, arrStart, imgObject.trackingEvents.start);
                                        }
                                        if (typeof imgObject.trackingEvents.creativeView != "undefined") {
                                            addArrItems(imgObject.trackingEvents.creativeView.length, arrCreativeView, imgObject.trackingEvents.creativeView);
                                        }
                                    } catch (ex) {
                                        console.log(ex);
                                    }
                                    break;
                                default:
                                    break;
                            }
                        }

                        if (countCrea == 0) {
                            console.log("ex3: ", countCrea);
                            finishPreroll();
                        }
                    } catch (e) {
                        console.log("ex1: ", e);
                        finishPreroll();
                    }
                }
            } catch (e) {
                console.log("ex2: ", e);
                finishPreroll();
            }
        });
    };
};

var flag = true;
var flag25 = true;
var flag75 = true;
var flag15s = true;
var flag30s = true;
var flag3s = true;
var flag5s = true;
var keyAds = "";
var idAds = "";
var countPreroll = 1;
adsConfig.setup({
    advImageID: "test",
    advImage: "",
    advImageClick: "",
    advTag: "",
    skipOffset: 7,
    adId: "",
    typeOvaAdv: "",
    txtInfo: "Quảng cáo sẽ tự động tắt trong xxxx giây",
    onAdShow: function (callbacks) {
        callbacks.key = keyAds;
        $(document).ready(function () {
            NasCore_RichMedia_Preroll.onAdShow(callbacks);
        });
        console.log(callbacks);
        _gaq.push(['_trackEvent', 'Audio-Ads', 'Tracking', 'Load TVC Preroll ' + adsConfig._adId]);
        //_gaq.push(['_trackEvent', 'Audio-Ads', 'Count', countPreroll + ' - ' + adsConfig._adId]);
        countPreroll++;
    },
    onAdSkipped: function (callbacks) {
        callbacks.key = keyAds;
        $(document).ready(function () {
            NasCore_RichMedia_Preroll.onAdSkipped(callbacks);
        });
        _gaq.push(['_trackEvent', 'Audio-Ads', 'Click', 'Skipping TVC Preroll ' + adsConfig._adId]);
    },
    onAdTime: function (callbacks) {
        callbacks.key = keyAds;
        if (Math.round(callbacks.position) >= 15 && flag15s) {
            $(document).ready(function () {
                NasCore_RichMedia_Preroll.onAd15Seconds(callbacks);
            });
            console.log(callbacks);
            _gaq.push(['_trackEvent', 'Audio-Ads', 'Tracking', '15s Loaded TVC Preroll ' + adsConfig._adId]);
            flag15s = false;
        }
        if (Math.round(callbacks.position) >= 3 && flag3s) {
            $(document).ready(function () {
                NasCore_RichMedia_Preroll.onAd3Seconds(callbacks);
            });
            _gaq.push(['_trackEvent', 'Audio-Ads', 'Tracking', '3s Loaded TVC Preroll ' + adsConfig._adId]);
            flag3s = false;
        }
        if (Math.round(callbacks.position) >= 5 && flag5s) {
            $(document).ready(function () {
                NasCore_RichMedia_Preroll.onAd5Seconds(callbacks);
            });
            _gaq.push(['_trackEvent', 'Audio-Ads', 'Tracking', '5s Loaded TVC Preroll ' + adsConfig._adId]);
            flag5s = false;
        }
        if (Math.round(callbacks.position) >= 30 && flag30s) {
            $(document).ready(function () {
                NasCore_RichMedia_Preroll.onAd30Seconds(callbacks);
            });
            _gaq.push(['_trackEvent', 'Audio-Ads', 'Tracking', '15s Loaded TVC Preroll ' + adsConfig._adId]);
            flag30s = false;
        }
        if (Math.round(callbacks.position) >= Math.round(callbacks.duration * 0.5) && flag) {
            $(document).ready(function () {
                NasCore_RichMedia_Preroll.onAdTime(callbacks);
            });
            _gaq.push(['_trackEvent', 'Audio-Ads', 'Tracking', 'MidPoint Loaded TVC Preroll ' + adsConfig._adId]);
            flag = false;
        }
        if (Math.round(callbacks.position) >= Math.round(callbacks.duration * 0.25) && flag25) {
            $(document).ready(function () {
                NasCore_RichMedia_Preroll.onAdQuarter(callbacks);
            });
            _gaq.push(['_trackEvent', 'Audio-Ads', 'Tracking', 'Quarter Loaded TVC Preroll ' + adsConfig._adId]);
            flag25 = false;
        }
        if (Math.round(callbacks.position) >= Math.round(callbacks.duration * 0.75) && flag75) {
            $(document).ready(function () {
                NasCore_RichMedia_Preroll.onAdThreeQuarter(callbacks);
            });
            _gaq.push(['_trackEvent', 'Audio-Ads', 'Tracking', 'ThreeQuarter Loaded TVC Preroll ' + adsConfig._adId]);
            flag75 = false;
        }
    },
    onAdComplete: function (callbacks) {
        callbacks.key = keyAds;
        $(document).ready(function () {
            NasCore_RichMedia_Preroll.onAdComplete(callbacks);
        });
        //_gaq.push(['_trackEvent', 'Audio-Ads', 'Tracking', 'Complete Loaded TVC Preroll ' + adsConfig._adId]);
    },
    onAdError: function (callbacks) {
        callbacks.key = keyAds;
        $(document).ready(function () {
            NasCore_RichMedia_Preroll.onAdError(callbacks);
        });
        NCTAdv.removeTVCAdv(callbacks.adId);
        _gaq.push(['_trackEvent', 'Audio-Ads', 'Tracking', 'Error TVC Preroll ' + adsConfig._adId + ' - ' + callbacks.error]);
    }
});