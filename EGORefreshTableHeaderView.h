//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GhostfaceDelegate-Protocol.h"

@class GhostfaceRefreshTableHeaderView, NSString, NSTimer, UIImageView;
@protocol EGORefreshTableHeaderDelegate;

@interface EGORefreshTableHeaderView : UIView <GhostfaceDelegate>
{
    int _state;
    id <EGORefreshTableHeaderDelegate> _delegate;
    GhostfaceRefreshTableHeaderView *ghost;
    UIImageView *_dancingGhost;
    unsigned long long _colorIndex;
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (void)changeDiscoLight;
@property(nonatomic) unsigned long long colorIndex; // @synthesize colorIndex=_colorIndex;
@property(retain, nonatomic) UIImageView *dancingGhost; // @synthesize dancingGhost=_dancingGhost;
- (void)dealloc;
@property(nonatomic) __weak id <EGORefreshTableHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)egoRefreshScrollViewDidEndDragging:(id)arg1;
- (void)egoRefreshScrollViewDidScroll:(id)arg1;
- (void)finishedAnimation;
- (void)forceToDance:(id)arg1;
@property(retain, nonatomic) GhostfaceRefreshTableHeaderView *ghost; // @synthesize ghost;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 arrowImageName:(id)arg2 textColor:(id)arg3;
- (void)setState:(int)arg1;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void)startDisco;
- (void)stopDisco;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
