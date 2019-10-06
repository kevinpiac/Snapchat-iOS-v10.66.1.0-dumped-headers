//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCDiscoverFeedLogoOverlayViewModel, SCDiscoverFeedPublisherStoryProgressBarViewModel, SCDiscoverFeedTileBadgeViewModel, SCNetworkImage;

@interface SCDiscoverFeedWhiteSpaceShowThumbnailViewModel : NSObject <NSCopying>
{
    SCDiscoverFeedLogoOverlayViewModel *_logoOverlayViewModel;
    SCDiscoverFeedTileBadgeViewModel *_tileBadgeViewModel;
    SCDiscoverFeedPublisherStoryProgressBarViewModel *_progressBarViewModel;
    NSAttributedString *_episodeSubtitle;
    SCNetworkImage *_imageThumbnail;
    struct CGSize _preferredSize;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSAttributedString *episodeSubtitle; // @synthesize episodeSubtitle=_episodeSubtitle;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) SCNetworkImage *imageThumbnail; // @synthesize imageThumbnail=_imageThumbnail;
- (id)initWithLogoOverlayViewModel:(id)arg1 tileBadgeViewModel:(id)arg2 progressBarViewModel:(id)arg3 episodeSubtitle:(id)arg4 imageThumbnail:(id)arg5 preferredSize:(struct CGSize)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCDiscoverFeedLogoOverlayViewModel *logoOverlayViewModel; // @synthesize logoOverlayViewModel=_logoOverlayViewModel;
@property(readonly, nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(readonly, copy, nonatomic) SCDiscoverFeedPublisherStoryProgressBarViewModel *progressBarViewModel; // @synthesize progressBarViewModel=_progressBarViewModel;
@property(readonly, copy, nonatomic) SCDiscoverFeedTileBadgeViewModel *tileBadgeViewModel; // @synthesize tileBadgeViewModel=_tileBadgeViewModel;

@end
