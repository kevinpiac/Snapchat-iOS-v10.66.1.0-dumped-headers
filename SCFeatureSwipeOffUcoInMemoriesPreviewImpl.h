//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureSwipeOffUcoInMemoriesPreview-Protocol.h"

@class NSString;

@interface SCFeatureSwipeOffUcoInMemoriesPreviewImpl : SCFeature <SCFeatureSwipeOffUcoInMemoriesPreview>
{
}

+ (id)invertedImage:(id)arg1;
- (_Bool)_shouldUseFullScreenImageAsImageSource;
- (void)createFilterWithUcoAppliedImageContainer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)imageFromUcoAppliedImageContainer:(id)arg1;
- (_Bool)shouldAddSwipeOffFilterForUcoAppliedImageContainer:(id)arg1;
@property(readonly, nonatomic) NSString *swipeOffFilterName;
@property(readonly, nonatomic) long long swipeOffFilterType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

