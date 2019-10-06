//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCAutoCreativeReadyDelegate-Protocol.h"

@class SCFuture, SCGeoFilter;
@protocol SCAutoCreativeMediaDelegate, SCAutoCreativeUIDelegate;

@protocol SCAutoCreativeManager <NSObject, SCAutoCreativeReadyDelegate>
- (void)autoCreativeUIDelegate:(id <SCAutoCreativeUIDelegate>)arg1 didDrawUIForCreativeFilter:(SCGeoFilter *)arg2;
- (void)blockAutoCreative;
- (_Bool)iOSMediaFiltersApplicable;
@property(nonatomic) __weak id <SCAutoCreativeMediaDelegate> mediaDelegate;
- (SCGeoFilter *)selectedFilter;
- (void)startImageClassification:(SCFuture *)arg1;
@end

