//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSendToShareSnapExperimentContext : SCExperimentContext
{
    _Bool _enableOnPreview;
    _Bool _enableOnSendToTopBar;
    _Bool _enableOnSendToMultiButton;
}

@property(readonly, nonatomic) _Bool enableOnPreview; // @synthesize enableOnPreview=_enableOnPreview;
@property(readonly, nonatomic) _Bool enableOnSendToMultiButton; // @synthesize enableOnSendToMultiButton=_enableOnSendToMultiButton;
@property(readonly, nonatomic) _Bool enableOnSendToTopBar; // @synthesize enableOnSendToTopBar=_enableOnSendToTopBar;
- (id)experimentName;
- (void)setupParameters;

@end

