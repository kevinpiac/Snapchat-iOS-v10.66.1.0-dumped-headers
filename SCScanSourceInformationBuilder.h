//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCScanSourceInformationBuilder : NSObject
{
    long long _scanSource;
    long long _deeplinkSource;
    long long _page;
    _Bool _openFromPreview;
    _Bool _skipRecordInScanHistory;
    _Bool _openFromCameraRoll;
    _Bool _relaunchFromInformationIcon;
    _Bool _openFromScanHistory;
    _Bool _isLensPreview;
    long long _publicProfileScanUserAction;
}

+ (id)withScanSourceInformation:(id)arg1;
- (id)build;
- (id)setDeeplinkSource:(long long)arg1;
- (id)setIsLensPreview:(_Bool)arg1;
- (id)setOpenFromCameraRoll:(_Bool)arg1;
- (id)setOpenFromPreview:(_Bool)arg1;
- (id)setOpenFromScanHistory:(_Bool)arg1;
- (id)setPage:(long long)arg1;
- (id)setPublicProfileScanUserAction:(long long)arg1;
- (id)setRelaunchFromInformationIcon:(_Bool)arg1;
- (id)setScanSource:(long long)arg1;
- (id)setSkipRecordInScanHistory:(_Bool)arg1;

@end
