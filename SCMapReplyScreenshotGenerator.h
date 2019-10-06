//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapReplyScreenshotGenerating-Protocol.h"

@class NSString, SCMapReplyCardViewModel, UIImage;
@protocol SCMapScreenshotProvider;

@interface SCMapReplyScreenshotGenerator : NSObject <SCMapReplyScreenshotGenerating>
{
    id <SCMapScreenshotProvider> _screenshotProvider;
    SCMapReplyCardViewModel *_replyCardModel;
    UIImage *_mostRecentScreenshot;
}

- (void).cxx_destruct;
- (void)_getCardImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)generateScreenshotAtSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithProvider:(id)arg1 replyCardModel:(id)arg2;
- (id)mostRecentScreenshot;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
