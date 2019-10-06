//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCEmbeddedMapViewDelegate-Protocol.h"
#import "SCMapCarouselContainerViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, SCEmbeddedMapView, SCGroupMapRequestLocationView, SCGroupMapViewPlaceModel, SCMapCarouselContainerView, SCUserSession, UIButton;
@protocol SCChatGroup, SCGroupMapViewDelegate;

@interface SCGroupMapView : UIView <SCMapCarouselContainerViewDelegate, UIGestureRecognizerDelegate, SCEmbeddedMapViewDelegate>
{
    UIButton *_mapTapCatcher;
    long long _prevCarouselIndex;
    id <SCChatGroup> _group;
    SCGroupMapViewPlaceModel *_customPlaceModel;
    id <SCGroupMapViewDelegate> _delegate;
    SCUserSession *_userSession;
    SCMapCarouselContainerView *_carouselView;
    SCEmbeddedMapView *_mapView;
    NSArray *_people;
    NSArray *_carouselItems;
    SCGroupMapRequestLocationView *_requestLocationOverlay;
}

- (void).cxx_destruct;
- (id)_groupMemberUserIds;
- (void)_tapped:(id)arg1;
- (void)_updateCarouselItems;
- (void)_updateForSelectedCarouselIndex:(long long)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSArray *carouselItems; // @synthesize carouselItems=_carouselItems;
@property(retain, nonatomic) SCMapCarouselContainerView *carouselView; // @synthesize carouselView=_carouselView;
@property(retain, nonatomic) SCGroupMapViewPlaceModel *customPlaceModel; // @synthesize customPlaceModel=_customPlaceModel;
@property(nonatomic) __weak id <SCGroupMapViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)embeddedMapViewDidUpdateFriendLocations:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
@property(retain, nonatomic) id <SCChatGroup> group; // @synthesize group=_group;
- (id)initWithEmbeddedMapView:(id)arg1 userSession:(id)arg2;
- (void)layoutSubviews;
- (void)mapCarouselContainer:(id)arg1 didScrollToIndex:(long long)arg2 action:(unsigned long long)arg3;
@property(retain, nonatomic) SCEmbeddedMapView *mapView; // @synthesize mapView=_mapView;
@property(copy, nonatomic) NSArray *people; // @synthesize people=_people;
@property(retain, nonatomic) SCGroupMapRequestLocationView *requestLocationOverlay; // @synthesize requestLocationOverlay=_requestLocationOverlay;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

