//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCAdsCommonSnapAdImpressionTrack;

@interface SCAdsAdToLensImpressionTrack : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *adToLensCarouselImpressionsArray; // @dynamic adToLensCarouselImpressionsArray;
@property(readonly, nonatomic) unsigned long long adToLensCarouselImpressionsArray_Count; // @dynamic adToLensCarouselImpressionsArray_Count;
@property(retain, nonatomic) SCAdsCommonSnapAdImpressionTrack *commonSnapAdImpression; // @dynamic commonSnapAdImpression;
@property(nonatomic) _Bool hasCommonSnapAdImpression; // @dynamic hasCommonSnapAdImpression;

@end

