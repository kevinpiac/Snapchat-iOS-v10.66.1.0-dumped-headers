//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapChromeButtonControlling-Protocol.h"

@class NSTimer, SCMapChromeButtonControllerListenerAnnouncer, SCMapChromeTooltip, SCMapStatusStore, SCMapUserPreferences;
@protocol SCCheckInOptionFetcher;

@interface SCMapStatusButtonController : NSObject <SCMapChromeButtonControlling>
{
    id <SCCheckInOptionFetcher> _checkInOptionFetcher;
    SCMapStatusStore *_mapStatusStore;
    SCMapUserPreferences *_mapUserPreferences;
    long long _buttonState;
    SCMapChromeTooltip *_tooltip;
    NSTimer *_tooltipTimer;
    SCMapChromeButtonControllerListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (_Bool)_canShowAnyTooltip;
- (_Bool)_canShowTooltipWithTitle:(id)arg1;
- (void)_didShowTooltipText:(id)arg1;
- (void)_maybeShowTooltipForOption:(id)arg1;
- (void)_showTooltipText:(id)arg1 duration:(double)arg2;
- (id)announcer;
- (long long)buttonState;
- (id)emoji;
- (id)initWithCheckInOptionFetcher:(id)arg1 mapStatusStore:(id)arg2 mapUserPreferences:(id)arg3;
- (void)showTooltipIfNecessary;
- (id)tooltip;

@end

