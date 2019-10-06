//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCDiscoverFeedPublisherStoryProgressBarViewModel, SCDiscoverFeedTileBadgeViewModel;

@interface SCDiscoverFeedPublisherStoryLabelOverlayViewModel : NSObject <NSCopying>
{
    NSAttributedString *_title;
    NSAttributedString *_subtitle;
    SCDiscoverFeedPublisherStoryProgressBarViewModel *_progressBarViewModel;
    SCDiscoverFeedTileBadgeViewModel *_tileBadge;
    long long _tileBadgePosition;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 progressBarViewModel:(id)arg3 tileBadge:(id)arg4 tileBadgePosition:(long long)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCDiscoverFeedPublisherStoryProgressBarViewModel *progressBarViewModel; // @synthesize progressBarViewModel=_progressBarViewModel;
@property(readonly, copy, nonatomic) NSAttributedString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) SCDiscoverFeedTileBadgeViewModel *tileBadge; // @synthesize tileBadge=_tileBadge;
@property(readonly, nonatomic) long long tileBadgePosition; // @synthesize tileBadgePosition=_tileBadgePosition;
@property(readonly, copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;

@end

