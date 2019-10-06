//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureImagePlayback-Protocol.h"

@class NSString;
@protocol SCFeatureSwipeFilters;

@interface SCFeatureImagePlaybackImpl : SCFeature <SCFeatureImagePlayback>
{
    id <SCFeatureSwipeFilters> _imageSwipeFilters;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCFeatureSwipeFilters> imageSwipeFilters; // @synthesize imageSwipeFilters=_imageSwipeFilters;
- (id)initWithImageSwipeFilters:(id)arg1;
- (void)setImage:(id)arg1;
- (void)startDisplay;
- (void)stopDisplay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
