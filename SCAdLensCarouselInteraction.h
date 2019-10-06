//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, SCAdSnapCreationInfo;

@interface SCAdLensCarouselInteraction : NSObject
{
    unsigned long long _carouselSize;
    NSString *_lensSessionId;
    NSArray *_lensSwipeInteractions;
    SCAdSnapCreationInfo *_adSnapCreationInfo;
    NSNumber *_deviceScreenHeight;
    NSNumber *_deviceScreenWidth;
}

- (void).cxx_destruct;
@property(copy, nonatomic) SCAdSnapCreationInfo *adSnapCreationInfo; // @synthesize adSnapCreationInfo=_adSnapCreationInfo;
@property(nonatomic) unsigned long long carouselSize; // @synthesize carouselSize=_carouselSize;
@property(copy, nonatomic) NSNumber *deviceScreenHeight; // @synthesize deviceScreenHeight=_deviceScreenHeight;
@property(copy, nonatomic) NSNumber *deviceScreenWidth; // @synthesize deviceScreenWidth=_deviceScreenWidth;
@property(copy, nonatomic) NSString *lensSessionId; // @synthesize lensSessionId=_lensSessionId;
@property(retain, nonatomic) NSArray *lensSwipeInteractions; // @synthesize lensSwipeInteractions=_lensSwipeInteractions;

@end
