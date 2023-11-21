var adsTracking = {};
var adsConfig = {
    _advTag: "",
    _advImageID: "",
    _advImage: "",
    _advImageClick: "",
    _skipOffset: "",
    _typeOvaAdv: "",
    _txtInfo: "",
    _adId: "",
    advImageID: function () {
        return adsConfig._advImageID
    },
    advImage: function () {
        return adsConfig._advImage
    },
    advImageClick: function () {
        return adsConfig._advImageClick
    },
    advTag: function () {
        return adsConfig._advTag
    },
    adId: function () {
        return adsConfig._adId
    },
    skipOffset: function () {
        return typeof adsConfig._skipOffset != "undefined" ? adsConfig._skipOffset : 7
    },
    typeOvaAdv: function () {
        return typeof adsConfig._typeOvaAdv != "undefined" ? adsConfig._typeOvaAdv : "vast"
    },
    txtInfo: function () {
        return typeof adsConfig._txtInfo != "undefined" ? adsConfig._txtInfo : "Quảng cáo sẽ tự động tắt trong xxxx giây"
    },
    setup: function (o) {
        adsConfig._advImageID = o.advImageID;
        adsConfig._advImage = o.advImage;
        adsConfig._advImageClick = o.advImageClick;
        o.advTag = o.advTag.replace("[content-page-url]", encodeURIComponent(window.top.location.href));
        adsConfig._advTag = o.advTag;
        adsConfig._adId = o.adId;
        adsConfig._skipOffset = o.skipOffset;
        adsConfig._typeOvaAdv = o.typeOvaAdv;
        adsConfig._txtInfo = o.txtInfo;
        if (typeof o.onAdImageView != "undefined")
            adsTracking.onAdImageView = o.onAdImageView;
        if (typeof o.onAdImageComplete != "undefined")
            adsTracking.onAdImageComplete = o.onAdImageComplete;
        if (typeof o.onAdImageClick != "undefined")
            adsTracking.onAdImageClick = o.onAdImageClick;
        if (typeof o.onAdSkipped != "undefined")
            adsTracking.onAdSkipped = o.onAdSkipped;
        if (typeof o.onAdPlay != "undefined")
            adsTracking.onAdPlay = o.onAdPlay;
        if (typeof o.onAdComplete != "undefined")
            adsTracking.onAdComplete = o.onAdComplete;
        if (typeof o.onAdTime != "undefined")
            adsTracking.onAdTime = o.onAdTime;
        if (typeof o.onAdError != "undefined")
            adsTracking.onAdError = o.onAdError;
        if (typeof o.onAdShow != "undefined") {
            adsTracking.onAdShow = o.onAdShow;
        }
        ;
        if (typeof o.onAdHidePlayer != "undefined")
            adsTracking.onAdHidePlayer = o.onAdHidePlayer;
    }
};