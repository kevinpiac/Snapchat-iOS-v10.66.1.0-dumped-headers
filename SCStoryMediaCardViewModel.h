//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCBaseStoryMediaCardViewModel.h"

@class NSString;

@interface SCStoryMediaCardViewModel : SCBaseStoryMediaCardViewModel
{
    _Bool _isLaguna;
    NSString *_title;
    long long _speedwayStoryV2Source;
}

- (void).cxx_destruct;
- (id)attributedTextForSubtitle;
- (id)attributedTextForTitle;
- (id)initWithStoryMediaMessageV3:(id)arg1 messageMetadata:(id)arg2 currentUserName:(id)arg3;

@end

