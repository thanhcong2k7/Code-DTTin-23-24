var STATUS_OPEN_SMARTY = true;
var trackingSmarty = {
    pushKeywordSearch: function () {
        var stringKeyword = NCTQuickSearch.qsKeyword;
        setCookie("NCTSmartyOption", stringKeyword, 1);
    },
    mp3_player_play_prev: function (id, playing_id, param, box_id, box_param, length, quality, last_id) {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = id;
                props.playing_id = "";
                console.log(props.playing_id);
                if (playing_id != "" && playing_id != "null") {
                    props.id = playing_id;
                    props.playing_id = id;
                }
                props.param = param;
                props.url = window.location.href;
                props.box_id = box_id;
                props.box_param = box_param;
                props.length = length;
                props.quality = quality;
                props.last_id = last_id;
                if (quality == "default") {
                    props.quality = "128kps";
                } else if (quality == "high") {
                    props.quality = "320kps";
                }
                var utm_source = getQueryVariable(window.location.href, "utm_source");
                props.utm_source = utm_source;
                var utm_medium = getQueryVariable(window.location.href, "utm_medium");
                props.utm_medium = utm_medium;
                var campaign = getQueryVariable(window.location.href, "campaign");
                props.campaign = campaign;
                Countly.q.push(['minty_track_user_action', 'mp3_player_play_prev', props]);
            } catch (ex) {
                console.log(ex);
            }
        }
    },
    mp3_player_play_next: function (id, playing_id, param, box_id, box_param, length, quality, last_id) {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = id;
                props.playing_id = "";
                console.log(props.playing_id);
                if (playing_id != "" && playing_id != "null") {
                    props.id = playing_id;
                    props.playing_id = id;
                }
                props.param = param;
                props.url = window.location.href;
                props.box_id = box_id;
                props.box_param = box_param;
                props.length = length;
                props.quality = quality;
                props.last_id = last_id;
                if (quality == "default") {
                    props.quality = "128kps";
                } else if (quality == "high") {
                    props.quality = "320kps";
                }
                var utm_source = getQueryVariable(window.location.href, "utm_source");
                props.utm_source = utm_source;
                var utm_medium = getQueryVariable(window.location.href, "utm_medium");
                props.utm_medium = utm_medium;
                var campaign = getQueryVariable(window.location.href, "campaign");
                props.campaign = campaign;
                Countly.q.push(['minty_track_user_action', 'mp3_player_play_next', props]);
            } catch (ex) {
                console.log(ex);
            }
        }
    },
    mp3_player_repeat: function (id, playing_id, param, box_id, box_param, length, quality) {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = id;
                props.playing_id = "";
                if (playing_id != "" && playing_id != "null") {
                    props.id = playing_id;
                    props.playing_id = id;
                }
                props.param = param;
                props.url = window.location.href;
                props.box_id = box_id;
                props.box_param = box_param;
                props.length = length;
                props.quality = quality;
                if (quality == "default") {
                    props.quality = "128kps";
                } else if (quality == "high") {
                    props.quality = "320kps";
                }
                var utm_source = getQueryVariable(window.location.href, "utm_source");
                props.utm_source = utm_source;
                var utm_medium = getQueryVariable(window.location.href, "utm_medium");
                props.utm_medium = utm_medium;
                var campaign = getQueryVariable(window.location.href, "campaign");
                props.campaign = campaign;
                Countly.q.push(['minty_track_user_action', 'mp3_player_repeat', props]);
            } catch (ex) {
                console.log(ex);
            }
        }
    },
    item_report: function (id, content) {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = id;
                props.param = content;
                props.url = window.location.href;
                Countly.q.push(['minty_track_user_action', 'item_report', props]);
            } catch (ex) {
                console.log(ex);
            }
        }
    },
    box_video_recommended_expand: function (id) {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = id;
                props.displayed_items = listVideoRecommend;
                props.param = autoplay.optionAutoplay;
                props.url = window.location.href;
                Countly.q.push(['minty_track_user_action', 'box_video_recommended_expand', props]);
            } catch (ex) {
                console.log(ex);
            }
        }
    },
    box_video_recommended_collapse: function (id) {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = id;
                props.displayed_items = listVideoRecommend;
                props.param = autoplay.optionAutoplay;
                props.url = window.location.href;
                Countly.q.push(['minty_track_user_action', 'box_video_recommended_collapse', props]);
            } catch (ex) {
                console.log(ex);
            }
        }
    },
    box_music_recommended_collapse: function (id) {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = id;
                props.displayed_items = box_music_recommended;
                props.param = autoplay.optionAutoplay;
                props.url = window.location.href;
                Countly.q.push(['minty_track_user_action', 'box_music_recommended_collapse', props]);
            } catch (ex) {
                console.log(ex);
            }
        }
    },
    box_music_recommended_expand: function (id) {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = id;
                props.displayed_items = box_music_recommended;
                props.param = autoplay.optionAutoplay;
                props.url = window.location.href;
                Countly.q.push(['minty_track_user_action', 'box_music_recommended_expand', props]);
            } catch (ex) {
                console.log(ex);
            }
        }
    },
    box_playlist_recommended_collapse: function (id) {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = id;
                props.displayed_items = box_playlist_recommended;
                props.param = autoplay.optionAutoplay;
                props.url = window.location.href;
                Countly.q.push(['minty_track_user_action', 'box_playlist_recommended_collapse', props]);
            } catch (ex) {
                console.log(ex);
            }
        }
    },
    box_playlist_recommended_expand: function (id) {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = id;
                props.displayed_items = box_playlist_recommended;
                props.param = autoplay.optionAutoplay;
                props.url = window.location.href;
                Countly.q.push(['minty_track_user_action', 'box_playlist_recommended_expand', props]);
            } catch (ex) {
                console.log(ex);
            }
        }
    },
    playlist_delete: function (id) {
        if (STATUS_OPEN_SMARTY) {
            props = {};
            props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
            props.id = id;
            props.length = length;
            props.url = window.location.href;
            Countly.q.push(['minty_track_user_action', 'playlist_delete', props]);
        }
    },
    playlist_edit: function (id) {
        if (STATUS_OPEN_SMARTY) {
            props = {};
            props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
            props.id = id;
            props.length = length;
            props.url = window.location.href;
            Countly.q.push(['minty_track_user_action', 'playlist_edit', props]);
        }
    },
    playlist_add_to: function (id) {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = id;
                props.length = length;
                props.url = window.location.href;
                props.param = "null";
                Countly.q.push(['minty_track_user_action', 'playlist_add_to', props]);
            } catch (ex) {
                console.log(ex);
            }
        }
    },
    item_fb_like: function (type, id, isLike) {
        if (STATUS_OPEN_SMARTY) {
            props = {};
            props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
            props.id = id;
            props.item_type = type;
            props.type = isLike;
            props.url = window.location.href;
            Countly.q.push(['minty_track_user_action', 'item_fb_like', props]);
        }
    },
    item_fb_share: function (type, id) {
        if (STATUS_OPEN_SMARTY) {
            props = {};
            props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
            props.id = id;
            props.item_type = type;
            props.url = window.location.href;
            Countly.q.push(['minty_track_user_action', 'item_fb_share', props]);
        }
    },
    item_share: function (type, id) {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = id;
                props.item_type = type;
                props.url = window.location.href;
                Countly.q.push(['minty_track_user_action', 'item_share', props]);
            } catch (ex) {
                console.log(ex);
            }
        }
    },
    item_comment: function (type, id) {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = id;
                props.item_type = type;
                props.url = window.location.href;
                Countly.q.push(['minty_track_user_action', 'item_comment', props]);
            } catch (ex) {
                console.log(ex);
            }
        }
    },
    item_add_ringtone: function (type, id) {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = id;
                props.item_type = type;
                props.url = window.location.href;
                Countly.q.push(['minty_track_user_action', 'item_add_rington', props]);
            } catch (ex) {
                console.log(ex);
            }
        }
    },
    song_make_ringtone: function (type, id) {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = id;
                props.item_type = type;
                props.url = window.location.href;
                Countly.q.push(['minty_track_user_action', 'song_make_ringtone', props]);
            } catch (ex) {
                console.log(ex);
            }
        }
    },
    item_download: function (type, id, quality) {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = id;
                props.item_type = type;
                props.url = window.location.href;
                props.param = quality;
                Countly.q.push(['minty_track_user_action', 'item_download', props]);
            } catch (ex) {
                console.log(ex);
            }
        }
    },
    song_add_to: function (id, playlist_id, box_id, box_param) {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = id;
                props.param = playlist_id;
                props.url = window.location.href;
                props.box_id = box_id;
                props.box_param = box_param;
                var utm_source = getQueryVariable(window.location.href, "utm_source");
                props.utm_source = utm_source;
                var utm_medium = getQueryVariable(window.location.href, "utm_medium");
                props.utm_medium = utm_medium;
                var campaign = getQueryVariable(window.location.href, "campaign");
                props.campaign = campaign;
                Countly.q.push(['minty_track_user_action', 'song_add_to', props]);
            } catch (ex) {
                console.log(ex);
            }
        }
    },
    mp3_player_play: function (id, playing_id, param, box_id, box_param, length, quality) {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = id;
                props.playing_id = playing_id;
                if (window.location.href.indexOf("/kham-pha/") != -1) {
                    props.playing_id = "khampha";
                }
                props.param = param;
                props.url = window.location.href;
                props.box_id = box_id;
                props.box_param = box_param;
                props.length = length;
                props.quality = quality;
                if (quality == "default") {
                    props.quality = "128kps";
                } else if (quality == "high") {
                    props.quality = "320kps";
                }
                var utm_source = getQueryVariable(window.location.href, "utm_source");
                props.utm_source = utm_source;
                var utm_medium = getQueryVariable(window.location.href, "utm_medium");
                props.utm_medium = utm_medium;
                var campaign = getQueryVariable(window.location.href, "campaign");
                props.campaign = campaign;
                Countly.q.push(['minty_track_user_action', 'mp3_player_play', props]);
            } catch (ex) {
                console.log(ex);
            }
        }
    },
    mp3_player_stop: function (id, playing_id, param, box_id, box_param, length, quality) {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = id;
                props.playing_id = playing_id;
                if (window.location.href.indexOf("/kham-pha/") != -1) {
                    props.playing_id = "khampha";
                }
                props.param = param;
                props.url = window.location.href;
                props.box_id = box_id;
                props.box_param = box_param;
                props.length = length;
                props.quality = quality;
                console.log(props);
                if (quality == "default") {
                    props.quality = "128kps";
                } else if (quality == "high") {
                    props.quality = "320kps";
                }
                var utm_source = getQueryVariable(window.location.href, "utm_source");
                props.utm_source = utm_source;
                var utm_medium = getQueryVariable(window.location.href, "utm_medium");
                props.utm_medium = utm_medium;
                var campaign = getQueryVariable(window.location.href, "campaign");
                props.campaign = campaign;
                Countly.q.push(['minty_track_user_action', 'mp3_player_stop', props]);
            } catch (ex) {
                console.log(ex);
            }
        }
    },
    mp3_player_time_slider_seek: function (id, playing_id, param, box_id, box_param, length, quality) {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = id;
                props.playing_id = "";
                if (playing_id != "" && playing_id != "null") {
                    props.id = playing_id;
                    props.playing_id = id;
                }
                props.param = param;
                props.url = window.location.href;
                props.box_id = box_id;
                props.box_param = box_param;
                props.length = length;
                props.quality = quality;
                var utm_source = getQueryVariable(window.location.href, "utm_source");
                props.utm_source = utm_source;
                var utm_medium = getQueryVariable(window.location.href, "utm_medium");
                props.utm_medium = utm_medium;
                var campaign = getQueryVariable(window.location.href, "campaign");
                props.campaign = campaign;
                console.log(props);
                Countly.q.push(['minty_track_user_action', 'mp3_player_time_slider_seek', props]);
            } catch (ex) {

            }
        }
    },
    video_add_to: function (id, length, quality) {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = id;
                props.length = length;
                props.url = window.location.href;
                props.param = "null";
                props.quality = typeof quality != "undefined" ? quality : "all";
                Countly.q.push(['minty_track_user_action', 'video_add_to', props]);
            } catch (ex) {

            }
        }
    },
    search: function (search_keyword) {
        if (STATUS_OPEN_SMARTY && search_keyword != "") {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.search_keyword = search_keyword;
                props.url = window.location.href;
                Countly.q.push(['minty_track_user_action', 'search', props]);
            } catch (ex) {
                console.error(ex);
            }
        }
    },
    video_play_stop: function (type) {
        console.log(type);
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = idDownloadTracking;
                props.length = idDownloadTrackingDuration;
                props.url = window.location.href;
                props.param = type;
                if (__data["nctPlayer"].curQuality == "low") {
                    props.quality = "480";
                } else if (__data["nctPlayer"].curQuality == "high") {
                    props.quality = "720";
                } else {
                    props.quality = "1080";
                }
                if (type == "play") {
                    Countly.q.push(['minty_track_user_action', 'video_play', props]);
                } else {
                    Countly.q.push(['minty_track_user_action', 'video_play_stop', props]);
                }
            } catch (ex) {

            }
        }
    },
    video_play: function () {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = idDownloadTracking;
                props.length = idDownloadTrackingDuration;
                props.url = window.location.href;
                props.param = type;
                if (__data["nctPlayer"].curQuality == "low") {
                    props.quality = "480";
                } else if (__data["nctPlayer"].curQuality == "high") {
                    props.quality = "720";
                } else {
                    props.quality = "1080";
                }
                Countly.q.push(['minty_track_user_action', 'video_play', props]);
            } catch (ex) {

            }
        }
    },
    video_play_next: function () {
        if (STATUS_OPEN_SMARTY) {
            try {
                props = {};
                props.user_id = (NCTInfo.userName != "") ? NCTInfo.userName : "null";
                props.id = idDownloadTracking;
                props.length = idDownloadTrackingDuration;
                props.url = window.location.href;
                props.param = "null";
                if (__data["nctPlayer"].curQuality == "low") {
                    props.quality = "480";
                } else if (__data["nctPlayer"].curQuality == "high") {
                    props.quality = "720";
                } else {
                    props.quality = "1080";
                }
                Countly.q.push(['minty_track_user_action', 'video_play_next', props]);
            } catch (ex) {

            }
        }
    }
};

function shouldSendItemView(html_element) {
    var item_class_name = html_element.className
    if (Countly.sent_item_view.hasOwnProperty(item_class_name)) {
        return false;
    }
    var w_width = window.innerWidth
    var w_height = window.innerHeight
    var w_offsetX = window.pageXOffset
    var w_offsetY = window.pageYOffset
    var offset_top = html_element.offsetTop;
    var offset_left = html_element.offsetLeft;
    var offset_h = html_element.offsetHeight;
    var offset_w = html_element.offsetWidth;
    //console.log('w_width: ' + w_width + ', w_height: ' + w_height +
    //', w_offsetX: ' + w_offsetX + ', w_offsetY: ' + w_offsetY);
    //console.log('offset_top: ' + offset_top + ', offset_left: ' + offset_left +
    //', offset_h: ' + offset_h, ', offset_w: ' + offset_w);
    if (offset_left > w_offsetX && offset_top > w_offsetY
            && offset_left + offset_w < w_offsetX + w_width
            && offset_top + offset_h < w_offsetY + w_height) {
        Countly.sent_item_view[item_class_name] = true
        return true;
    }
    return false;
}