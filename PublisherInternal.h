//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, NSMutableArray, NSString;

@interface PublisherInternal : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *admins; // @dynamic admins;
@property(copy, nonatomic) NSString *adsEnabled; // @dynamic adsEnabled;
@property(copy, nonatomic) NSString *articleCss; // @dynamic articleCss;
@property(copy, nonatomic) NSString *articleCssId; // @dynamic articleCssId;
@property(copy, nonatomic) NSString *articleJsId; // @dynamic articleJsId;
@property(retain, nonatomic) NSMutableArray *blacklistCountryArray; // @dynamic blacklistCountryArray;
@property(readonly, nonatomic) unsigned long long blacklistCountryArray_Count; // @dynamic blacklistCountryArray_Count;
@property(retain, nonatomic) NSMutableArray *blacklistDistributionCountryArray; // @dynamic blacklistDistributionCountryArray;
@property(readonly, nonatomic) unsigned long long blacklistDistributionCountryArray_Count; // @dynamic blacklistDistributionCountryArray_Count;
@property(retain, nonatomic) NSMutableArray *blacklistLanguageArray; // @dynamic blacklistLanguageArray;
@property(readonly, nonatomic) unsigned long long blacklistLanguageArray_Count; // @dynamic blacklistLanguageArray_Count;
@property(copy, nonatomic) NSString *brightcoveAccountId; // @dynamic brightcoveAccountId;
@property(copy, nonatomic) NSString *brightcoveVideoTag; // @dynamic brightcoveVideoTag;
@property(copy, nonatomic) NSString *changesDisabled; // @dynamic changesDisabled;
@property(copy, nonatomic) NSString *contentAgeGateLevel; // @dynamic contentAgeGateLevel;
@property(copy, nonatomic) NSString *contentAgeGateLevelOpt; // @dynamic contentAgeGateLevelOpt;
@property(copy, nonatomic) NSString *continuousPublishV2Enabled; // @dynamic continuousPublishV2Enabled;
@property(copy, nonatomic) NSString *deepLinkURL; // @dynamic deepLinkURL;
@property(retain, nonatomic) NSMutableArray *defaultAdSlotsArray; // @dynamic defaultAdSlotsArray;
@property(readonly, nonatomic) unsigned long long defaultAdSlotsArray_Count; // @dynamic defaultAdSlotsArray_Count;
@property(copy, nonatomic) NSString *defaultExpirationDurationSec; // @dynamic defaultExpirationDurationSec;
@property(copy, nonatomic) NSString *defaultFilledIcon; // @dynamic defaultFilledIcon;
@property(copy, nonatomic) NSString *defaultShareOption; // @dynamic defaultShareOption;
@property(copy, nonatomic) NSString *formalName; // @dynamic formalName;
@property(copy, nonatomic) NSString *geofenceIds; // @dynamic geofenceIds;
@property(copy, nonatomic) NSString *hidden; // @dynamic hidden;
@property(copy, nonatomic) NSString *horizontalIcon; // @dynamic horizontalIcon;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *isBrightcoveReady; // @dynamic isBrightcoveReady;
@property(copy, nonatomic) NSString *isMigrated; // @dynamic isMigrated;
@property(copy, nonatomic) NSString *isShow; // @dynamic isShow;
@property(copy, nonatomic) NSString *migrated; // @dynamic migrated;
@property(copy, nonatomic) NSString *multiTilesEnabled; // @dynamic multiTilesEnabled;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSMutableArray *nonSubRegionsArray; // @dynamic nonSubRegionsArray;
@property(readonly, nonatomic) unsigned long long nonSubRegionsArray_Count; // @dynamic nonSubRegionsArray_Count;
@property(copy, nonatomic) NSString *p12Path; // @dynamic p12Path;
@property(copy, nonatomic) NSString *primaryColor; // @dynamic primaryColor;
@property(retain, nonatomic) GPBInt32Array *primaryColorRgbArray; // @dynamic primaryColorRgbArray;
@property(readonly, nonatomic) unsigned long long primaryColorRgbArray_Count; // @dynamic primaryColorRgbArray_Count;
@property(copy, nonatomic) NSString *primaryLanguage; // @dynamic primaryLanguage;
@property(retain, nonatomic) NSMutableArray *prodRegionsArray; // @dynamic prodRegionsArray;
@property(readonly, nonatomic) unsigned long long prodRegionsArray_Count; // @dynamic prodRegionsArray_Count;
@property(copy, nonatomic) NSString *productionPublisher; // @dynamic productionPublisher;
@property(copy, nonatomic) NSString *projectName; // @dynamic projectName;
@property(copy, nonatomic) NSString *publisherId; // @dynamic publisherId;
@property(copy, nonatomic) NSString *publishingEnabled; // @dynamic publishingEnabled;
@property(retain, nonatomic) NSMutableArray *regionsArray; // @dynamic regionsArray;
@property(readonly, nonatomic) unsigned long long regionsArray_Count; // @dynamic regionsArray_Count;
@property(copy, nonatomic) NSString *rollingNewsEnabled; // @dynamic rollingNewsEnabled;
@property(copy, nonatomic) NSString *scannableActionId; // @dynamic scannableActionId;
@property(copy, nonatomic) NSString *scannableId; // @dynamic scannableId;
@property(copy, nonatomic) NSString *searchIcon; // @dynamic searchIcon;
@property(copy, nonatomic) NSString *secondaryColor; // @dynamic secondaryColor;
@property(retain, nonatomic) GPBInt32Array *secondaryColorRgbArray; // @dynamic secondaryColorRgbArray;
@property(readonly, nonatomic) unsigned long long secondaryColorRgbArray_Count; // @dynamic secondaryColorRgbArray_Count;
@property(copy, nonatomic) NSString *serviceAccEmail; // @dynamic serviceAccEmail;
@property(copy, nonatomic) NSString *serviceBucket; // @dynamic serviceBucket;
@property(copy, nonatomic) NSString *shareOption; // @dynamic shareOption;
@property(copy, nonatomic) NSString *shareable; // @dynamic shareable;
@property(copy, nonatomic) NSString *shareableHeadline; // @dynamic shareableHeadline;
@property(copy, nonatomic) NSString *shareableIconURL; // @dynamic shareableIconURL;
@property(copy, nonatomic) NSString *show; // @dynamic show;
@property(copy, nonatomic) NSString *sponsored; // @dynamic sponsored;
@property(copy, nonatomic) NSString *sponsoredText; // @dynamic sponsoredText;
@property(copy, nonatomic) NSString *subscribable; // @dynamic subscribable;
@property(copy, nonatomic) NSString *subscribeIcon; // @dynamic subscribeIcon;
@property(copy, nonatomic) NSString *topsnapLimit; // @dynamic topsnapLimit;
@property(copy, nonatomic) NSString *type; // @dynamic type;
@property(copy, nonatomic) NSString *videoModeEnabled; // @dynamic videoModeEnabled;
@property(retain, nonatomic) NSMutableArray *whitelistCountryArray; // @dynamic whitelistCountryArray;
@property(readonly, nonatomic) unsigned long long whitelistCountryArray_Count; // @dynamic whitelistCountryArray_Count;
@property(retain, nonatomic) NSMutableArray *whitelistDistributionCountryArray; // @dynamic whitelistDistributionCountryArray;
@property(readonly, nonatomic) unsigned long long whitelistDistributionCountryArray_Count; // @dynamic whitelistDistributionCountryArray_Count;
@property(retain, nonatomic) NSMutableArray *whitelistLanguageArray; // @dynamic whitelistLanguageArray;
@property(readonly, nonatomic) unsigned long long whitelistLanguageArray_Count; // @dynamic whitelistLanguageArray_Count;

@end

