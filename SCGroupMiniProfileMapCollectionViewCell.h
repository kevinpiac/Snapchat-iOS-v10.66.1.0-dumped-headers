//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMiniProfileCollectionViewCell.h"

@class SCEmbeddedMapViewLoggingSession, SCGroupMapView, SCUserSession;

@interface SCGroupMiniProfileMapCollectionViewCell : SCMiniProfileCollectionViewCell
{
    SCUserSession *_userSession;
    SCEmbeddedMapViewLoggingSession *_loggingSession;
    SCGroupMapView *_groupMapView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCGroupMapView *groupMapView; // @synthesize groupMapView=_groupMapView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setGroup:(id)arg1 userSession:(id)arg2 loggingSession:(id)arg3 delegate:(id)arg4;

@end

