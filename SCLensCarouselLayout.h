//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLensLayoutDependencies;

@interface SCLensCarouselLayout : NSObject <SCTraceEnabled>
{
    SCLensLayoutDependencies *_lensLayoutDependencies;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double cameraCarouselBottomOffset;
@property(readonly, nonatomic) double cameraItemDimension;
@property(readonly, nonatomic) double cameraLensCarouselHeight;
@property(readonly, nonatomic) double cameraSelectedItemDimension;
@property(readonly, nonatomic) double cameraSponsoredSlugOffset;
@property(readonly, nonatomic) double deviceSpecificBottomMargin;
@property(readonly, nonatomic) double lensCellTopBottomMargin;
@property(readonly) SCLensLayoutDependencies *lensLayoutDependencies; // @synthesize lensLayoutDependencies=_lensLayoutDependencies;
@property(readonly, nonatomic) double onDemandCarouselBottomOffset;
@property(readonly, copy, nonatomic) NSString *openCloseButtonImageName;
@property(readonly, nonatomic) struct CGSize openCloseButtonSize;
@property(readonly, nonatomic) double openCloseButtonTopMargin;
@property(readonly, nonatomic) struct CGAffineTransform openCloseButtonTransform;
@property(readonly, nonatomic) double talkCarouselBottomOffset;
@property(readonly, nonatomic) double talkItemDimension;
@property(readonly, nonatomic) double talkLensCarouselHeight;
@property(readonly, nonatomic) double talkSelectedItemDimension;
@property(readonly, nonatomic) double talkSponsoredSlugOffset;
- (double)v11AdditionalBottomMargin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

