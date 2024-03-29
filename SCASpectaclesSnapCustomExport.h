//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCASpectaclesSnapCustomExport : SCAUserTrackedEvent
{
    long long promptAction;
    long long source;
    long long cancellationSource;
    NSString *contentId;
    NSString *lensInfo;
    NSString *shareChannel;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getCancellationSource;
- (id)getContentId;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getLensInfo;
- (double)getPerUserSamplingRate;
- (long long)getPromptAction;
- (id)getShareChannel;
- (long long)getSource;
- (id)init;
- (void)setCancellationSource:(long long)arg1;
- (void)setContentId:(id)arg1;
- (void)setLensInfo:(id)arg1;
- (void)setPromptAction:(long long)arg1;
- (void)setShareChannel:(id)arg1;
- (void)setSource:(long long)arg1;

@end

