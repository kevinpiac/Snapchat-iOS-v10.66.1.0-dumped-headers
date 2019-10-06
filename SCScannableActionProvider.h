//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol SCScannableActionProviderDelegate;

@interface SCScannableActionProvider : NSObject
{
    NSTimer *_timeoutTimer;
    _Bool _recordScanHistory;
    id <SCScannableActionProviderDelegate> _delegate;
}

- (void).cxx_destruct;
- (_Bool)_checkAndStopTimeoutTimer;
- (void)_handleScannableLookupSuccessWithResponseDictionary:(id)arg1 scanData:(id)arg2 version:(int)arg3 codeType:(int)arg4 pageType:(long long)arg5 unlockProperties:(id)arg6;
- (void)_lookupBarcodeUsingScannedData:(id)arg1 pageType:(long long)arg2 userSession:(id)arg3;
- (void)_lookupScannableUsingData:(id)arg1 songInfo:(id)arg2 version:(int)arg3 codeType:(long long)arg4 pageType:(long long)arg5 unlockProperties:(id)arg6 userSession:(id)arg7;
- (void)_lookupScannableUsingData:(id)arg1 version:(int)arg2 codeType:(long long)arg3 pageType:(long long)arg4 unlockProperties:(id)arg5 userSession:(id)arg6;
- (void)_lookupSnapcodeUsingScannedData:(id)arg1 pageType:(long long)arg2 userSession:(id)arg3;
- (void)_lookupSongInfoUsingScannedData:(id)arg1 pageType:(long long)arg2 userSession:(id)arg3;
- (void)_startTimeoutTimerWithTimeInterval:(double)arg1;
@property(nonatomic) __weak id <SCScannableActionProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)provideScannableActionsForScanResults:(id)arg1 pageType:(long long)arg2 userSession:(id)arg3;
- (void)provideScannableActionsForScanResults:(id)arg1 recordScanHistory:(_Bool)arg2 pageType:(long long)arg3 userSession:(id)arg4;
- (void)timeoutTimerFired;

@end
