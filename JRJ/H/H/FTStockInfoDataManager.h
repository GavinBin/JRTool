//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JSKRequestDelegate-Protocol.h"

@class FTKLineRequest, FTSnapshotModelItem, FTTimeDivisionRequest, JRJFundNetValueRequest, JRJKLineNewRequest, JRJTimeLineTechDataRequest, JRJTradeDetailContainerModel, JSKRequest, JSKStock, LeanOperationModel, NSArray, NSDateFormatter, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSTimer;

@interface FTStockInfoDataManager : NSObject <JSKRequestDelegate>
{
    _Bool _hiddenJiesuo;
    _Bool _isShowChouma;
    _Bool _firstReceiveKLineNewData;
    _Bool _firstReceiveKLineMoreData;
    _Bool _noMoreKLineRecieved;
    _Bool _isFirstLoad;
    _Bool _isKcbStock;
    _Bool _forceNotShowAuction;
    _Bool _isShowZpointView;
    _Bool _refreshMohuView;
    _Bool _haveIndex;
    _Bool _isCaculatingChipFlag;
    _Bool _hasPostSnapShotToChip;
    _Bool _isLongPressFlag;
    _Bool _showAuction;
    _Bool _isGaiNianPlate;
    _Bool _canFiveDayTimelineRefresh;
    _Bool _hasFetchServerTimeInterval;
    _Bool _isShowAuction;
    NSString *_stockCode;
    long long _stockType;
    long long _stockMarketType;
    NSString *_stockName;
    long long _virtualMinIndex;
    FTSnapshotModelItem *_snapshot;
    double _stockYestClosePrice;
    long long _stockTradingStatus;
    NSArray *_auctions;
    NSArray *_arr_timeline;
    NSArray *_arr_avg_timeline;
    NSArray *_arr_five_day_timeline;
    NSMutableArray *_arr_fundNetValue;
    NSArray *_arr_buy_five;
    NSArray *_arr_sell_five;
    NSArray *_arr_trade_detail;
    JRJTradeDetailContainerModel *_fullTradeDetailModel;
    NSMutableArray *_arr_plateData;
    NSMutableArray *_largeVolumeArr;
    NSArray *_arr_day_kline_all;
    NSArray *_arr_week_kline_all;
    NSArray *_arr_month_kline_all;
    NSArray *_arr_min1_kline_all;
    NSArray *_arr_min5_kline_all;
    NSArray *_arr_min15_kline_all;
    NSArray *_arr_min30_kline_all;
    NSArray *_arr_min60_kline_all;
    NSArray *_arr_min120_kline_all;
    long long _minKLineMinId;
    long long _minKLineMaxId;
    long long _minKLineType;
    NSMutableDictionary *_dic_entrustChanges;
    NSDictionary *_dic_tradeScale;
    CDUnknownBlockType _didReceiveSnapShot;
    CDUnknownBlockType _didReceiveFundNetValue;
    CDUnknownBlockType _didReceiveTradeDetail;
    CDUnknownBlockType _didReceiveFullTradeDetail;
    CDUnknownBlockType _didReceiveTimeline;
    CDUnknownBlockType _didReceiveFiveDayTimeline;
    CDUnknownBlockType _didReceiveDayKLine;
    CDUnknownBlockType _didReceiveWeekKLine;
    CDUnknownBlockType _didReceiveMonthKLine;
    CDUnknownBlockType _didReceiveBuySellFive;
    CDUnknownBlockType _didReceiveTechData;
    CDUnknownBlockType _didReceiveAuction;
    CDUnknownBlockType _didReceiveMinsKLine;
    CDUnknownBlockType _didReceiveTimeLineTechData;
    CDUnknownBlockType _noMoreDayKlineRecieved;
    CDUnknownBlockType _noMoreWeekKlineRecieved;
    CDUnknownBlockType _noMoreMonthKlineRecieved;
    CDUnknownBlockType _noMoreMinsKlineRecieved;
    CDUnknownBlockType _noMoreFundTimeLineRecieved;
    CDUnknownBlockType _snapShotNotRecievedWithError;
    CDUnknownBlockType _shouldHideIndicator;
    CDUnknownBlockType _didSelectIndex;
    CDUnknownBlockType _auctionShowStateChangedBlock;
    double _timelineMaxValue;
    double _timelineMinValue;
    double _timelineTradeVolumeMaxValue;
    double _timelineAuctionTradeVolumeMaxValue;
    double _timelineAvgVolumeMaxValue;
    double _fiveDayTimelineTradeVolumeMaxValue;
    double _fiveDayTimelineMaxValue;
    double _fiveDayTimelineMinValue;
    double _fiveDayTimelineFirstPreClose;
    double _fundNetValueMaxValue;
    double _fundNetValueMinValue;
    double _fundNetValueFirstPreClose;
    double _dayKLineMaxValue;
    double _dayKLineMinValue;
    double _dayKLineTopMaxValue;
    double _dayKLineBottomMinValue;
    double _weekKLineMaxValue;
    double _weekKLineMinValue;
    double _monthKLineMaxValue;
    double _monthKLineMinValue;
    double _minsKLineMaxValue;
    double _minsKLineMinValue;
    JSKStock *_stock;
    JSKRequest *_snapRequest;
    JSKRequest *_minlineRequest;
    JSKRequest *_udaInfoRequest;
    JSKRequest *_calculateSnapRequest;
    JSKRequest *_snapShotInfoRequest;
    JSKRequest *_timeLineRequest;
    JSKRequest *_buy_sellRequest;
    JSKRequest *_trade_detailRequest;
    JSKRequest *_indexUpOrDownCountRequest;
    JSKRequest *_snapKCBRequest;
    JSKRequest *_auctionRequest;
    JSKRequest *_fullTradeDetailRequest;
    JRJFundNetValueRequest *_fundNetValueRequest;
    FTTimeDivisionRequest *_req_five_timeline;
    NSTimer *_kLineNewDataReqTimer;
    JRJKLineNewRequest *_reqKLineNewData;
    FTKLineRequest *_reqKLineMoreData;
    CDUnknownBlockType _reloadKLineDataBlock;
    CDUnknownBlockType _kLineDataLoadMoreBlock;
    CDUnknownBlockType _noMoreKLineRecievedBlock;
    NSString *_plate_day_kline_minID;
    NSString *_plate_week_kline_minID;
    NSString *_plate_month_kline_minID;
    JRJTimeLineTechDataRequest *_timeLineTechDataRequest;
    NSMutableArray *_timeLineTechData;
    double _ddxMax;
    double _ddxMin;
    double _suplMax;
    double _suplMin;
    double _volumeMax;
    double _volumeMin;
    NSTimer *_timer;
    NSTimer *_plateTimer;
    double _timeIntervalWithServerTime;
    long long _klineLoadMoreCount;
    long long _klineLoadState;
    long long _timelineMaxId;
    long long _fundValueMaxId;
    double _techMax;
    double _techMin;
    NSArray *_tendArr;
    NSString *_subTypeDesc;
    long long _subTypeId;
    long long _trendTypeId;
    LeanOperationModel *_leanOperationModel;
    NSNumber *_days;
    NSNumber *_bs;
    NSNumber *_signalRatio;
    NSMutableArray *_plateUpDownDomainList;
    NSArray *_chipAverageCost;
    NSString *_chipLastDate;
    NSMutableArray *_transtionArray;
    NSDateFormatter *_fmt_date;
    long long _jihejingjiaType;
}

+ (void)convertPlateDicData:(id)arg1 toModel:(id)arg2;
+ (void)load;
+ (id)tradeFormatToUnit:(double)arg1;
+ (id)formatToUnit:(double)arg1;
+ (id)tradeFormatToUnit:(double)arg1 hasDecimal:(_Bool)arg2;
+ (id)formatToIntegerLessThan1wUnit:(double)arg1 hasDecimal:(_Bool)arg2;
+ (id)formatToUnit:(double)arg1 hasDecimal:(_Bool)arg2;
+ (long long)klineScaleMinLinesCount;
+ (long long)klineScaleMaxLinesCount;
+ (long long)klineStockPageSize;
+ (id)translateNum:(double)arg1 dotNum:(int)arg2;
+ (_Bool)isInTradeTime;
+ (long long)defaultKLineCount:(_Bool)arg1;
+ (long long)fiveDayTimelineGroupCount;
+ (long long)fiveDayTimelineGap;
+ (long long)fiveDayTimelinesCount;
+ (double)borderSeparatorLineWidth;
+ (double)timelineWithMinusSeparatorWidth:(double)arg1 type:(long long)arg2;
+ (double)chartTopAddMargin;
+ (double)chartTopBottomMargin;
+ (double)chartTimeLineDrawHeight:(double)arg1;
+ (double)chartDrawHeight:(double)arg1;
+ (double)timelineBarWidth:(double)arg1 type:(long long)arg2;
+ (double)timelineTrendWidth:(double)arg1 type:(long long)arg2;
+ (long long)timelineBarCountOfType:(long long)arg1;
+ (long long)timelineTrendPointCountOfType:(long long)arg1;
+ (double)klineBarGap;
+ (double)xAxisWithIndex:(double)arg1 lineWidth:(double)arg2 leftMargin:(double)arg3;
+ (double)yAxisWithValue:(double)arg1 maxValue:(double)arg2 minValue:(double)arg3 drawHeight:(double)arg4 topMargin:(double)arg5;
+ (id)klineTechTopValueBackgroundColor;
+ (id)rightTechSelectedColor;
+ (id)DMIAdxrColor;
+ (id)RSI24Color;
+ (id)RSI12Color;
+ (id)RSI6Color;
+ (id)KDJJColor;
+ (id)KDJDColor;
+ (id)KDJKColor;
+ (id)MACDColor;
+ (id)MACDDeaColor;
+ (id)MACDDiffColor;
+ (id)klineMA60Color;
+ (id)klineMA30Color;
+ (id)klineMA20Color;
+ (id)klineMA10Color;
+ (id)klineMA5Color;
+ (id)indexColor;
+ (id)guideLabelTextColor;
+ (id)indexLabelBackgroudColor;
+ (id)separatorGrayColor;
+ (id)separatorGreenColor;
+ (id)grayEqualColor;
+ (id)snapshotBlackColor;
+ (id)greenDropColor;
+ (id)redRiseColor;
+ (id)timelineMidHoriGreenSeparatorColor;
+ (id)timelineShadowFillColor;
+ (id)timelineAvgSellPriceStrokeColor;
+ (id)timelineAvgBuyPriceStrokeColor;
+ (id)timelineAvgPriceStrokeColor;
+ (id)timelineLastPriceStrokeColor;
@property(nonatomic) _Bool isShowAuction; // @synthesize isShowAuction=_isShowAuction;
@property(nonatomic) long long jihejingjiaType; // @synthesize jihejingjiaType=_jihejingjiaType;
@property(nonatomic) _Bool hasFetchServerTimeInterval; // @synthesize hasFetchServerTimeInterval=_hasFetchServerTimeInterval;
@property(nonatomic) _Bool canFiveDayTimelineRefresh; // @synthesize canFiveDayTimelineRefresh=_canFiveDayTimelineRefresh;
@property(retain, nonatomic) NSDateFormatter *fmt_date; // @synthesize fmt_date=_fmt_date;
@property(nonatomic) _Bool isGaiNianPlate; // @synthesize isGaiNianPlate=_isGaiNianPlate;
@property(nonatomic) _Bool showAuction; // @synthesize showAuction=_showAuction;
@property(retain, nonatomic) NSMutableArray *transtionArray; // @synthesize transtionArray=_transtionArray;
@property(retain, nonatomic) NSString *chipLastDate; // @synthesize chipLastDate=_chipLastDate;
@property(nonatomic) _Bool isLongPressFlag; // @synthesize isLongPressFlag=_isLongPressFlag;
@property(nonatomic) _Bool hasPostSnapShotToChip; // @synthesize hasPostSnapShotToChip=_hasPostSnapShotToChip;
@property(nonatomic) _Bool isCaculatingChipFlag; // @synthesize isCaculatingChipFlag=_isCaculatingChipFlag;
@property(retain, nonatomic) NSArray *chipAverageCost; // @synthesize chipAverageCost=_chipAverageCost;
@property(nonatomic) _Bool haveIndex; // @synthesize haveIndex=_haveIndex;
@property(nonatomic) _Bool refreshMohuView; // @synthesize refreshMohuView=_refreshMohuView;
@property(retain, nonatomic) NSMutableArray *plateUpDownDomainList; // @synthesize plateUpDownDomainList=_plateUpDownDomainList;
@property(retain, nonatomic) NSNumber *signalRatio; // @synthesize signalRatio=_signalRatio;
@property(retain, nonatomic) NSNumber *bs; // @synthesize bs=_bs;
@property(retain, nonatomic) NSNumber *days; // @synthesize days=_days;
@property(nonatomic) _Bool isShowZpointView; // @synthesize isShowZpointView=_isShowZpointView;
@property(retain, nonatomic) LeanOperationModel *leanOperationModel; // @synthesize leanOperationModel=_leanOperationModel;
@property(nonatomic) _Bool forceNotShowAuction; // @synthesize forceNotShowAuction=_forceNotShowAuction;
@property(nonatomic) _Bool isKcbStock; // @synthesize isKcbStock=_isKcbStock;
@property(nonatomic) long long trendTypeId; // @synthesize trendTypeId=_trendTypeId;
@property(nonatomic) long long subTypeId; // @synthesize subTypeId=_subTypeId;
@property(retain, nonatomic) NSString *subTypeDesc; // @synthesize subTypeDesc=_subTypeDesc;
@property(retain, nonatomic) NSArray *tendArr; // @synthesize tendArr=_tendArr;
@property(nonatomic) double techMin; // @synthesize techMin=_techMin;
@property(nonatomic) double techMax; // @synthesize techMax=_techMax;
@property(nonatomic) long long fundValueMaxId; // @synthesize fundValueMaxId=_fundValueMaxId;
@property(nonatomic) long long timelineMaxId; // @synthesize timelineMaxId=_timelineMaxId;
@property(nonatomic) long long klineLoadState; // @synthesize klineLoadState=_klineLoadState;
@property(nonatomic) long long klineLoadMoreCount; // @synthesize klineLoadMoreCount=_klineLoadMoreCount;
@property(nonatomic) double timeIntervalWithServerTime; // @synthesize timeIntervalWithServerTime=_timeIntervalWithServerTime;
@property(retain, nonatomic) NSTimer *plateTimer; // @synthesize plateTimer=_plateTimer;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double volumeMin; // @synthesize volumeMin=_volumeMin;
@property(nonatomic) double volumeMax; // @synthesize volumeMax=_volumeMax;
@property(nonatomic) double suplMin; // @synthesize suplMin=_suplMin;
@property(nonatomic) double suplMax; // @synthesize suplMax=_suplMax;
@property(nonatomic) double ddxMin; // @synthesize ddxMin=_ddxMin;
@property(nonatomic) double ddxMax; // @synthesize ddxMax=_ddxMax;
@property(retain, nonatomic) NSMutableArray *timeLineTechData; // @synthesize timeLineTechData=_timeLineTechData;
@property(retain, nonatomic) JRJTimeLineTechDataRequest *timeLineTechDataRequest; // @synthesize timeLineTechDataRequest=_timeLineTechDataRequest;
@property(retain, nonatomic) NSString *plate_month_kline_minID; // @synthesize plate_month_kline_minID=_plate_month_kline_minID;
@property(retain, nonatomic) NSString *plate_week_kline_minID; // @synthesize plate_week_kline_minID=_plate_week_kline_minID;
@property(copy, nonatomic) NSString *plate_day_kline_minID; // @synthesize plate_day_kline_minID=_plate_day_kline_minID;
@property(copy, nonatomic) CDUnknownBlockType noMoreKLineRecievedBlock; // @synthesize noMoreKLineRecievedBlock=_noMoreKLineRecievedBlock;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(copy, nonatomic) CDUnknownBlockType kLineDataLoadMoreBlock; // @synthesize kLineDataLoadMoreBlock=_kLineDataLoadMoreBlock;
@property(copy, nonatomic) CDUnknownBlockType reloadKLineDataBlock; // @synthesize reloadKLineDataBlock=_reloadKLineDataBlock;
@property(nonatomic) _Bool noMoreKLineRecieved; // @synthesize noMoreKLineRecieved=_noMoreKLineRecieved;
@property(retain, nonatomic) FTKLineRequest *reqKLineMoreData; // @synthesize reqKLineMoreData=_reqKLineMoreData;
@property(retain, nonatomic) JRJKLineNewRequest *reqKLineNewData; // @synthesize reqKLineNewData=_reqKLineNewData;
@property(retain, nonatomic) NSTimer *kLineNewDataReqTimer; // @synthesize kLineNewDataReqTimer=_kLineNewDataReqTimer;
@property(retain, nonatomic) FTTimeDivisionRequest *req_five_timeline; // @synthesize req_five_timeline=_req_five_timeline;
@property(retain, nonatomic) JRJFundNetValueRequest *fundNetValueRequest; // @synthesize fundNetValueRequest=_fundNetValueRequest;
@property(retain, nonatomic) JSKRequest *fullTradeDetailRequest; // @synthesize fullTradeDetailRequest=_fullTradeDetailRequest;
@property(retain, nonatomic) JSKRequest *auctionRequest; // @synthesize auctionRequest=_auctionRequest;
@property(retain, nonatomic) JSKRequest *snapKCBRequest; // @synthesize snapKCBRequest=_snapKCBRequest;
@property(retain, nonatomic) JSKRequest *indexUpOrDownCountRequest; // @synthesize indexUpOrDownCountRequest=_indexUpOrDownCountRequest;
@property(retain, nonatomic) JSKRequest *trade_detailRequest; // @synthesize trade_detailRequest=_trade_detailRequest;
@property(retain, nonatomic) JSKRequest *buy_sellRequest; // @synthesize buy_sellRequest=_buy_sellRequest;
@property(retain, nonatomic) JSKRequest *timeLineRequest; // @synthesize timeLineRequest=_timeLineRequest;
@property(retain, nonatomic) JSKRequest *snapShotInfoRequest; // @synthesize snapShotInfoRequest=_snapShotInfoRequest;
@property(retain, nonatomic) JSKRequest *calculateSnapRequest; // @synthesize calculateSnapRequest=_calculateSnapRequest;
@property(retain, nonatomic) JSKRequest *udaInfoRequest; // @synthesize udaInfoRequest=_udaInfoRequest;
@property(retain, nonatomic) JSKRequest *minlineRequest; // @synthesize minlineRequest=_minlineRequest;
@property(retain, nonatomic) JSKRequest *snapRequest; // @synthesize snapRequest=_snapRequest;
@property(retain, nonatomic) JSKStock *stock; // @synthesize stock=_stock;
@property(nonatomic) _Bool firstReceiveKLineMoreData; // @synthesize firstReceiveKLineMoreData=_firstReceiveKLineMoreData;
@property(nonatomic) _Bool firstReceiveKLineNewData; // @synthesize firstReceiveKLineNewData=_firstReceiveKLineNewData;
@property(nonatomic) double minsKLineMinValue; // @synthesize minsKLineMinValue=_minsKLineMinValue;
@property(nonatomic) double minsKLineMaxValue; // @synthesize minsKLineMaxValue=_minsKLineMaxValue;
@property(nonatomic) double monthKLineMinValue; // @synthesize monthKLineMinValue=_monthKLineMinValue;
@property(nonatomic) double monthKLineMaxValue; // @synthesize monthKLineMaxValue=_monthKLineMaxValue;
@property(nonatomic) double weekKLineMinValue; // @synthesize weekKLineMinValue=_weekKLineMinValue;
@property(nonatomic) double weekKLineMaxValue; // @synthesize weekKLineMaxValue=_weekKLineMaxValue;
@property(nonatomic) double dayKLineBottomMinValue; // @synthesize dayKLineBottomMinValue=_dayKLineBottomMinValue;
@property(nonatomic) double dayKLineTopMaxValue; // @synthesize dayKLineTopMaxValue=_dayKLineTopMaxValue;
@property(nonatomic) double dayKLineMinValue; // @synthesize dayKLineMinValue=_dayKLineMinValue;
@property(nonatomic) double dayKLineMaxValue; // @synthesize dayKLineMaxValue=_dayKLineMaxValue;
@property(nonatomic) double fundNetValueFirstPreClose; // @synthesize fundNetValueFirstPreClose=_fundNetValueFirstPreClose;
@property(nonatomic) double fundNetValueMinValue; // @synthesize fundNetValueMinValue=_fundNetValueMinValue;
@property(nonatomic) double fundNetValueMaxValue; // @synthesize fundNetValueMaxValue=_fundNetValueMaxValue;
@property(nonatomic) double fiveDayTimelineFirstPreClose; // @synthesize fiveDayTimelineFirstPreClose=_fiveDayTimelineFirstPreClose;
@property(nonatomic) double fiveDayTimelineMinValue; // @synthesize fiveDayTimelineMinValue=_fiveDayTimelineMinValue;
@property(nonatomic) double fiveDayTimelineMaxValue; // @synthesize fiveDayTimelineMaxValue=_fiveDayTimelineMaxValue;
@property(nonatomic) double fiveDayTimelineTradeVolumeMaxValue; // @synthesize fiveDayTimelineTradeVolumeMaxValue=_fiveDayTimelineTradeVolumeMaxValue;
@property(nonatomic) double timelineAvgVolumeMaxValue; // @synthesize timelineAvgVolumeMaxValue=_timelineAvgVolumeMaxValue;
@property(nonatomic) double timelineAuctionTradeVolumeMaxValue; // @synthesize timelineAuctionTradeVolumeMaxValue=_timelineAuctionTradeVolumeMaxValue;
@property(nonatomic) double timelineTradeVolumeMaxValue; // @synthesize timelineTradeVolumeMaxValue=_timelineTradeVolumeMaxValue;
@property(nonatomic) double timelineMinValue; // @synthesize timelineMinValue=_timelineMinValue;
@property(nonatomic) double timelineMaxValue; // @synthesize timelineMaxValue=_timelineMaxValue;
@property(copy, nonatomic) CDUnknownBlockType auctionShowStateChangedBlock; // @synthesize auctionShowStateChangedBlock=_auctionShowStateChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType didSelectIndex; // @synthesize didSelectIndex=_didSelectIndex;
@property(copy, nonatomic) CDUnknownBlockType shouldHideIndicator; // @synthesize shouldHideIndicator=_shouldHideIndicator;
@property(copy, nonatomic) CDUnknownBlockType snapShotNotRecievedWithError; // @synthesize snapShotNotRecievedWithError=_snapShotNotRecievedWithError;
@property(copy, nonatomic) CDUnknownBlockType noMoreFundTimeLineRecieved; // @synthesize noMoreFundTimeLineRecieved=_noMoreFundTimeLineRecieved;
@property(copy, nonatomic) CDUnknownBlockType noMoreMinsKlineRecieved; // @synthesize noMoreMinsKlineRecieved=_noMoreMinsKlineRecieved;
@property(copy, nonatomic) CDUnknownBlockType noMoreMonthKlineRecieved; // @synthesize noMoreMonthKlineRecieved=_noMoreMonthKlineRecieved;
@property(copy, nonatomic) CDUnknownBlockType noMoreWeekKlineRecieved; // @synthesize noMoreWeekKlineRecieved=_noMoreWeekKlineRecieved;
@property(copy, nonatomic) CDUnknownBlockType noMoreDayKlineRecieved; // @synthesize noMoreDayKlineRecieved=_noMoreDayKlineRecieved;
@property(copy, nonatomic) CDUnknownBlockType didReceiveTimeLineTechData; // @synthesize didReceiveTimeLineTechData=_didReceiveTimeLineTechData;
@property(copy, nonatomic) CDUnknownBlockType didReceiveMinsKLine; // @synthesize didReceiveMinsKLine=_didReceiveMinsKLine;
@property(copy, nonatomic) CDUnknownBlockType didReceiveAuction; // @synthesize didReceiveAuction=_didReceiveAuction;
@property(copy, nonatomic) CDUnknownBlockType didReceiveTechData; // @synthesize didReceiveTechData=_didReceiveTechData;
@property(copy, nonatomic) CDUnknownBlockType didReceiveBuySellFive; // @synthesize didReceiveBuySellFive=_didReceiveBuySellFive;
@property(copy, nonatomic) CDUnknownBlockType didReceiveMonthKLine; // @synthesize didReceiveMonthKLine=_didReceiveMonthKLine;
@property(copy, nonatomic) CDUnknownBlockType didReceiveWeekKLine; // @synthesize didReceiveWeekKLine=_didReceiveWeekKLine;
@property(copy, nonatomic) CDUnknownBlockType didReceiveDayKLine; // @synthesize didReceiveDayKLine=_didReceiveDayKLine;
@property(copy, nonatomic) CDUnknownBlockType didReceiveFiveDayTimeline; // @synthesize didReceiveFiveDayTimeline=_didReceiveFiveDayTimeline;
@property(copy, nonatomic) CDUnknownBlockType didReceiveTimeline; // @synthesize didReceiveTimeline=_didReceiveTimeline;
@property(copy, nonatomic) CDUnknownBlockType didReceiveFullTradeDetail; // @synthesize didReceiveFullTradeDetail=_didReceiveFullTradeDetail;
@property(copy, nonatomic) CDUnknownBlockType didReceiveTradeDetail; // @synthesize didReceiveTradeDetail=_didReceiveTradeDetail;
@property(copy, nonatomic) CDUnknownBlockType didReceiveFundNetValue; // @synthesize didReceiveFundNetValue=_didReceiveFundNetValue;
@property(copy, nonatomic) CDUnknownBlockType didReceiveSnapShot; // @synthesize didReceiveSnapShot=_didReceiveSnapShot;
@property(retain, nonatomic) NSDictionary *dic_tradeScale; // @synthesize dic_tradeScale=_dic_tradeScale;
@property(retain, nonatomic) NSMutableDictionary *dic_entrustChanges; // @synthesize dic_entrustChanges=_dic_entrustChanges;
@property(nonatomic) long long minKLineType; // @synthesize minKLineType=_minKLineType;
@property(nonatomic) long long minKLineMaxId; // @synthesize minKLineMaxId=_minKLineMaxId;
@property(nonatomic) long long minKLineMinId; // @synthesize minKLineMinId=_minKLineMinId;
@property(retain, nonatomic) NSArray *arr_min120_kline_all; // @synthesize arr_min120_kline_all=_arr_min120_kline_all;
@property(retain, nonatomic) NSArray *arr_min60_kline_all; // @synthesize arr_min60_kline_all=_arr_min60_kline_all;
@property(retain, nonatomic) NSArray *arr_min30_kline_all; // @synthesize arr_min30_kline_all=_arr_min30_kline_all;
@property(retain, nonatomic) NSArray *arr_min15_kline_all; // @synthesize arr_min15_kline_all=_arr_min15_kline_all;
@property(retain, nonatomic) NSArray *arr_min5_kline_all; // @synthesize arr_min5_kline_all=_arr_min5_kline_all;
@property(retain, nonatomic) NSArray *arr_min1_kline_all; // @synthesize arr_min1_kline_all=_arr_min1_kline_all;
@property(retain, nonatomic) NSArray *arr_month_kline_all; // @synthesize arr_month_kline_all=_arr_month_kline_all;
@property(retain, nonatomic) NSArray *arr_week_kline_all; // @synthesize arr_week_kline_all=_arr_week_kline_all;
@property(retain, nonatomic) NSArray *arr_day_kline_all; // @synthesize arr_day_kline_all=_arr_day_kline_all;
@property(nonatomic) _Bool isShowChouma; // @synthesize isShowChouma=_isShowChouma;
@property(nonatomic) _Bool hiddenJiesuo; // @synthesize hiddenJiesuo=_hiddenJiesuo;
@property(retain, nonatomic) NSMutableArray *largeVolumeArr; // @synthesize largeVolumeArr=_largeVolumeArr;
@property(retain, nonatomic) NSMutableArray *arr_plateData; // @synthesize arr_plateData=_arr_plateData;
@property(retain, nonatomic) JRJTradeDetailContainerModel *fullTradeDetailModel; // @synthesize fullTradeDetailModel=_fullTradeDetailModel;
@property(retain, nonatomic) NSArray *arr_trade_detail; // @synthesize arr_trade_detail=_arr_trade_detail;
@property(retain, nonatomic) NSArray *arr_sell_five; // @synthesize arr_sell_five=_arr_sell_five;
@property(retain, nonatomic) NSArray *arr_buy_five; // @synthesize arr_buy_five=_arr_buy_five;
@property(retain, nonatomic) NSMutableArray *arr_fundNetValue; // @synthesize arr_fundNetValue=_arr_fundNetValue;
@property(retain, nonatomic) NSArray *arr_five_day_timeline; // @synthesize arr_five_day_timeline=_arr_five_day_timeline;
@property(retain, nonatomic) NSArray *arr_avg_timeline; // @synthesize arr_avg_timeline=_arr_avg_timeline;
@property(retain, nonatomic) NSArray *arr_timeline; // @synthesize arr_timeline=_arr_timeline;
@property(retain, nonatomic) NSArray *auctions; // @synthesize auctions=_auctions;
@property(nonatomic) long long stockTradingStatus; // @synthesize stockTradingStatus=_stockTradingStatus;
@property(nonatomic) double stockYestClosePrice; // @synthesize stockYestClosePrice=_stockYestClosePrice;
@property(retain, nonatomic) FTSnapshotModelItem *snapshot; // @synthesize snapshot=_snapshot;
@property(nonatomic) long long virtualMinIndex; // @synthesize virtualMinIndex=_virtualMinIndex;
@property(copy, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
@property(nonatomic) long long stockMarketType; // @synthesize stockMarketType=_stockMarketType;
@property(nonatomic) long long stockType; // @synthesize stockType=_stockType;
@property(copy, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
- (void).cxx_destruct;
- (void)timeLineTechDataRequestStart;
- (void)timeLineTechDataRequestStop;
- (void)calculateTimeLineTechData;
- (void)addTimeLineTechData:(id)arg1;
- (void)initMaxValue;
- (void)calculateTimeLineMaxMinValueWithTimeLines:(id)arg1 auctions:(id)arg2;
- (void)calculatePlateFiveDayTimelineItemWithArr:(id)arg1;
- (void)calculatePlateMaxMinTimelineItemUsingArr:(id)arg1;
- (void)updateAvgTimePrice:(id)arg1;
- (void)parseLargeVolume:(id)arg1;
- (void)parsePlateMonthKLineNewDataWithArr:(id)arg1;
- (void)parsePlateWeekKLineNewDataWithArr:(id)arg1;
- (void)parsePlateDayKLineNewDataWithArr:(id)arg1;
- (void)updatePlateMonthKlineWithDic:(id)arg1;
- (void)updatePlateWeekKlineWithDic:(id)arg1;
- (void)updatePlateDayKlineWithDic:(id)arg1;
- (void)updateAuction:(id)arg1;
- (void)updateTimeLineDataWithArr:(id)arg1;
- (void)updatePlateFiveDayTimelinesWithDic:(id)arg1;
- (void)updatePlateTimeLineDataWithDic:(id)arg1;
- (void)populateBuySellFiveWithDic:(id)arg1;
- (void)updateQuoteInfoDataWithDic:(id)arg1;
- (void)parseTradeDetailWithArr:(id)arg1;
- (void)updateWithFullTradeDetailData:(id)arg1;
- (void)updateWithTradeDetailData:(id)arg1;
- (void)postRefreshChipCaculate;
- (void)updateSnapShotInfoWithDic:(id)arg1;
- (void)updateDataWithSnapShotDic:(id)arg1;
- (void)updateDataWithSnapShotKCBDic:(id)arg1;
- (void)updateIndexSnapshotDic:(id)arg1;
- (void)updateSnapshotWithSnapShotCaDic:(id)arg1;
- (id)snapKCBWithDic:(id)arg1;
- (id)snapWithDic:(id)arg1;
- (void)clearSnapshotData;
- (void)updateSnapshotWithSnapshotKCBData:(id)arg1;
- (void)updateSnapshotWithSnapshotData:(id)arg1;
- (void)updateSnapshotKCBData:(id)arg1;
- (void)updateSnapshotData:(id)arg1;
- (id)snapWithPlateDic:(id)arg1;
- (void)updatePlateSnapshotData:(id)arg1;
- (void)postKlineReceivedHideLoadingNotification;
- (void)postSnapshotDidrecevicedNotification;
- (void)updateWithSecuritySummary:(id)arg1;
- (void)invalidTimer;
- (long long)techCount;
- (void)resetKLineData;
- (void)calculateBuySell;
- (void)calculateSAR;
- (void)calculateDMI;
- (void)calculateWR;
- (void)calculateBOLL;
- (void)calculateKDJ;
- (void)calculateRSI;
- (void)calcutateLargeVolume;
- (void)calcutateMACD;
- (void)parseTechDatas;
- (void)updateTechResponseData;
- (_Bool)isTechLineLoadFinished;
- (_Bool)isKLineLoadFinihed;
- (id)parseMinsJRJKLineDataModelToFTKLineModelItem:(id)arg1;
- (id)parseJRJKLineDataModelToFTKLineModelItem:(id)arg1;
- (id)parseJRJKLineDataModelToFTKLineModelItem:(id)arg1 klineType:(long long)arg2;
- (void)updateMoreKLineData:(id)arg1;
- (void)receiveKLineMoreData;
- (void)updateNewKLineData:(id)arg1;
- (void)receiveKLineNewData;
- (_Bool)shouldFiveDayTimelineAddTwoPercentGap;
- (void)calculateFundValuesItem;
- (void)calculateFiveDayTimelineItem;
- (void)updateFundValue;
- (void)updateFiveDayTimelines;
- (_Bool)shouldTimelineAddTwoPercentGap;
- (void)updateLocalAndServerTimeInterval:(id)arg1;
- (void)updateSnapshotWithSnapshot:(id)arg1;
- (id)summaryCacheKey;
@property(nonatomic) long long mainTechType;
@property(nonatomic) long long storedTechType;
@property(nonatomic) long long storedRightType;
@property(nonatomic) long long storedStockLineTypeIndex;
@property(nonatomic) long long storedStockDataType;
- (void)dealloc;
- (id)init;
- (id)formatTimelineVolumeUnit:(double)arg1;
- (id)formatTimelineVolume:(double)arg1;
- (id)fiveDayTimelineLowerBottomTagText;
- (id)fiveDayTimelineLowerTopTagText;
- (id)dayTimelineLowerBottomTagText;
- (id)dayTimelineLowerTopTagText;
- (id)formatToUnitWithoutDecimal:(double)arg1;
- (id)formateDecimalValue:(double)arg1;
- (id)snapshot:(id)arg1 withAttri:(id)arg2;
- (id)snapshotDeafultBlack:(id)arg1 font:(double)arg2;
- (id)snapshotDefaultBlackWithFont:(double)arg1;
- (id)snapshotCompareWithYesterdayClosePriceFont:(double)arg1 comparePrice:(double)arg2;
- (id)snapshotAttribtedWithFont:(double)arg1 color:(id)arg2;
- (id)needPlusSymbolCompareWithYesterdayPrice:(double)arg1;
- (id)needPlusSymbol:(double)arg1 second:(double)arg2;
- (id)snapshotColorWithYesterdayPrice:(double)arg1;
- (id)stockSnapShotTime;
- (id)stockSnapShotaccumNet;
- (id)stockSnapShotFundNetValue;
- (id)stockSnapShotDiscountRadio;
- (id)stockSnapShotHardenPriceNum;
- (id)stockSnapShotDropstopPriceNum;
- (id)stockSnapShotllnEPSNum;
- (id)stockSnapShotllTotalShareNum;
- (id)stockSnapShotWeibiNum;
- (id)stockSnapShotllPFShareNum;
- (id)stockSnapShotLiangbiNum;
- (id)stockSnapShotSlideNum;
- (id)stockSnapShotHoriNum;
- (_Bool)isValidIndex;
- (id)stockSnapShotIncNum;
- (id)stockSnapShotCirculationMarketValue;
- (id)stockSnapShotTradeValueByClose;
- (id)stockSnapShotTradeVolumeByClose;
- (id)stockSnapShotOutterVolume;
- (id)stockSnapShotInnerVolume;
- (id)stockSnapShotMarketValue;
- (id)stockSnapShotPE;
- (id)stockSnapShotAmplitude;
- (id)stockSnapShotTradeValue;
- (id)stockSnapShotLowPrice;
- (id)stockSnapShotHighPrice;
- (id)stockSnapShotTurnOver;
- (id)landsStockSnapShotTradeVolume:(double)arg1;
- (id)stockSnapShotTradeVolume:(double)arg1;
- (id)stockSnapShotYesterdayClosePrice;
- (id)stockSnapShotOpenPrice;
- (id)stockSnapShotChangeText;
- (id)stockSnapShotLastPriceAndUpDown:(double)arg1;
- (id)stockSnapShotLastPrice:(double)arg1;
- (void)requestFullTradeDetailRequest:(long long)arg1 length:(long long)arg2;
- (void)cancelSubscribeTradeDetailData;
- (void)subscribeTradeDetailData;
- (int)getminTypeByFTStockDataType:(long long)arg1;
- (_Bool)stockIsStop;
- (void)switchToCurrentKLineDateDateFormatter;
- (long long)klineDateDrawMonthGap;
- (void)updateKLineData:(id)arg1 klineType:(long long)arg2 techType:(long long)arg3 rightType:(long long)arg4;
- (void)plateUpdateKLineData:(id)arg1 klineType:(long long)arg2 techType:(long long)arg3 rightType:(long long)arg4;
- (id)klineData:(long long)arg1 techType:(long long)arg2 rightType:(long long)arg3;
- (id)klineAllDataForKlineType:(long long)arg1;
- (id)buySellFiveTradeVolume:(id)arg1;
- (id)formatBuySellFiveTradeVolume:(long long)arg1;
- (id)buySellFiveTradePrice:(id)arg1;
- (_Bool)isValidWithStartTime:(id)arg1;
- (_Bool)isInRefreshTime;
- (_Bool)isInTradeTime;
- (void)fetchMoreKLineDataWithDataType:(long long)arg1;
- (void)fetchNewKLineDataWithDataType:(long long)arg1;
- (void)fetchFundNetValueList;
- (void)fetchPlateMonthKlineIsLoadMore:(_Bool)arg1;
- (void)fetchPlateWeekKlineIsLoadMore:(_Bool)arg1;
- (void)fetchPlateDayKlineIsLoadMore:(_Bool)arg1;
- (void)fetchPlateUpDownDomain;
- (void)fetchPlateFiveTimeline;
- (void)fetchPlateTimeline;
- (void)fetchPlateSnapShot;
- (void)fetchLargeVolume;
- (void)fetchWonderful;
- (void)fetchTending;
- (void)fetchStockFiveDayTimeline;
- (void)refreshStockInfoDataWithType:(id)arg1;
- (void)fetchInfoWithIndex:(long long)arg1 isLandscape:(_Bool)arg2 enableTimer:(double)arg3 isLoadMore:(_Bool)arg4;
- (void)fetchInfoWithIndex:(long long)arg1 isLandscape:(_Bool)arg2 isLoadMore:(_Bool)arg3;
- (_Bool)fetchStockInfoLoadMore:(long long)arg1 isRequestMore:(_Bool)arg2;
- (void)fetchAnotherTech;
- (void)stopKLineRequestTimer;
- (void)startKLineRequestTimer;
- (void)fetchInfoWithTypes:(long long)arg1 enableTimer:(double)arg2 isLoadMore:(_Bool)arg3;
- (void)request:(id)arg1 didReceiveData:(id)arg2;
- (void)cancelSubscibeSnapshotAndTimeLineData;
- (void)subscibeSnapshotAndTimeLineData;
- (void)requestStockDataWithSocket;
- (long long)needToRequestTypesAtIndex:(long long)arg1 isLandscape:(_Bool)arg2;
- (void)updateKLineValue:(double)arg1 type:(long long)arg2 isMax:(_Bool)arg3;
- (double)klineValue:(long long)arg1 isMax:(_Bool)arg2;
- (double)klineMinValue:(long long)arg1;
- (double)klineMaxValue:(long long)arg1;
- (void)updateKLineMinValue:(double)arg1 type:(long long)arg2;
- (void)updateKLineMaxValue:(double)arg1 type:(long long)arg2;
- (long long)currentNumberOfTimelines:(long long)arg1;
- (id)fiveDayTimelineDate:(id)arg1;
- (id)fiveDayTimelineModel:(long long)arg1 index:(long long)arg2;
- (id)timelineModelNextItem:(id)arg1;
- (id)timelineModelPreItem:(id)arg1;
- (id)timelineModelAtIndex:(long long)arg1;
- (id)snapShotRedGreenGrayColor;
- (id)buySellFiveColorWithTradePrice:(id)arg1;
- (id)comparePrice:(double)arg1 price:(double)arg2 addZero:(_Bool)arg3;
- (id)comparePrice:(double)arg1 price:(double)arg2;
- (id)fiveDayTimelineTradeVolumeColor:(id)arg1 group:(id)arg2;
- (id)timelineTradeVolumeColor:(id)arg1;
- (_Bool)klineAndTechAreAllReceived;
- (_Bool)shouldRequestMoreKlinesWithCurrentTechType;
- (_Bool)canDrawKLine:(long long)arg1 klineType:(long long)arg2 rightType:(long long)arg3;
- (_Bool)canDrawKLineTech:(long long)arg1;
- (_Bool)canDrawTechLinesWithKLineData:(long long)arg1 techType:(long long)arg2 rightType:(long long)arg3;
- (_Bool)canDrawTechWithCurrentKLines;
- (_Bool)canReloadBuySellFive;
- (_Bool)canDrawKLine:(long long)arg1;
- (_Bool)canDrawTimeline:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
