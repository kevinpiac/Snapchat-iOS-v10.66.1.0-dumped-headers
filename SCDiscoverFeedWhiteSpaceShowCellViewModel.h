//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCActionModel, SCDiscoverFeedDebugViewModel, SCDiscoverFeedStoryLoggingInfo, SCDiscoverFeedWhiteSpaceDynamicPostViewLayerViewModel, SCDiscoverFeedWhiteSpaceHeadlineViewModel, SCDiscoverFeedWhiteSpaceProfileRowViewModel, SCDiscoverFeedWhiteSpaceShowThumbnailViewModel, SCDiscoverFeedWhiteSpaceSubscriptionIconViewModel, UIColor;

@interface SCDiscoverFeedWhiteSpaceShowCellViewModel : NSObject <NSCopying>
{
    SCDiscoverFeedWhiteSpaceShowThumbnailViewModel *_showThumbnailViewModel;
    SCDiscoverFeedWhiteSpaceHeadlineViewModel *_headlineViewModel;
    SCDiscoverFeedWhiteSpaceProfileRowViewModel *_profileRowViewModel;
    SCDiscoverFeedWhiteSpaceSubscriptionIconViewModel *_subscriptionIconViewModel;
    SCDiscoverFeedWhiteSpaceDynamicPostViewLayerViewModel *_postViewLayer;
    UIColor *_backgroundColor;
    SCActionModel *_thumbnailUpperHalfSingleTapActionModel;
    SCActionModel *_thumbnailLowerHalfSingleTapActionModel;
    SCActionModel *_thumbnailAndHeadlineSingleTapActionModel;
    SCActionModel *_longPressActionModel;
    SCActionModel *_scrollOutOfScreenActionModel;
    SCDiscoverFeedStoryLoggingInfo *_storyLoggingInfo;
    NSString *_accessibilityLabel;
    SCDiscoverFeedDebugViewModel *_debugViewModel;
    SCActionModel *_debugActionModel;
    struct CGSize _preferredSize;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCActionModel *debugActionModel; // @synthesize debugActionModel=_debugActionModel;
@property(readonly, copy, nonatomic) SCDiscoverFeedDebugViewModel *debugViewModel; // @synthesize debugViewModel=_debugViewModel;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) SCDiscoverFeedWhiteSpaceHeadlineViewModel *headlineViewModel; // @synthesize headlineViewModel=_headlineViewModel;
- (id)initWithShowThumbnailViewModel:(id)arg1 headlineViewModel:(id)arg2 profileRowViewModel:(id)arg3 subscriptionIconViewModel:(id)arg4 postViewLayer:(id)arg5 preferredSize:(struct CGSize)arg6 backgroundColor:(id)arg7 thumbnailUpperHalfSingleTapActionModel:(id)arg8 thumbnailLowerHalfSingleTapActionModel:(id)arg9 thumbnailAndHeadlineSingleTapActionModel:(id)arg10 longPressActionModel:(id)arg11 scrollOutOfScreenActionModel:(id)arg12 storyLoggingInfo:(id)arg13 accessibilityLabel:(id)arg14 debugViewModel:(id)arg15 debugActionModel:(id)arg16;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
@property(readonly, copy, nonatomic) SCDiscoverFeedWhiteSpaceDynamicPostViewLayerViewModel *postViewLayer; // @synthesize postViewLayer=_postViewLayer;
@property(readonly, nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(readonly, copy, nonatomic) SCDiscoverFeedWhiteSpaceProfileRowViewModel *profileRowViewModel; // @synthesize profileRowViewModel=_profileRowViewModel;
@property(readonly, copy, nonatomic) SCActionModel *scrollOutOfScreenActionModel; // @synthesize scrollOutOfScreenActionModel=_scrollOutOfScreenActionModel;
@property(readonly, copy, nonatomic) SCDiscoverFeedWhiteSpaceShowThumbnailViewModel *showThumbnailViewModel; // @synthesize showThumbnailViewModel=_showThumbnailViewModel;
@property(readonly, copy, nonatomic) SCDiscoverFeedStoryLoggingInfo *storyLoggingInfo; // @synthesize storyLoggingInfo=_storyLoggingInfo;
@property(readonly, copy, nonatomic) SCDiscoverFeedWhiteSpaceSubscriptionIconViewModel *subscriptionIconViewModel; // @synthesize subscriptionIconViewModel=_subscriptionIconViewModel;
@property(readonly, copy, nonatomic) SCActionModel *thumbnailAndHeadlineSingleTapActionModel; // @synthesize thumbnailAndHeadlineSingleTapActionModel=_thumbnailAndHeadlineSingleTapActionModel;
@property(readonly, copy, nonatomic) SCActionModel *thumbnailLowerHalfSingleTapActionModel; // @synthesize thumbnailLowerHalfSingleTapActionModel=_thumbnailLowerHalfSingleTapActionModel;
@property(readonly, copy, nonatomic) SCActionModel *thumbnailUpperHalfSingleTapActionModel; // @synthesize thumbnailUpperHalfSingleTapActionModel=_thumbnailUpperHalfSingleTapActionModel;

@end

