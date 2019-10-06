//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UIImpactFeedbackGenerator, UINotificationFeedbackGenerator;

@interface SIGPullToRefreshGhostView : UIView
{
    unsigned long long _state;
    UIImageView *_defaultBody;
    UIImageView *_winkBody;
    UIImageView *_shockedBody;
    UIImageView *_rainbowBody;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
    UINotificationFeedbackGenerator *_notificationFeedbackGenerator;
    _Bool _rainbow;
    double _offset;
}

- (void).cxx_destruct;
- (void)_addChild:(id)arg1;
- (void)_setBodyForState:(unsigned long long)arg1;
- (void)_setState:(unsigned long long)arg1;
- (id)init;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool rainbow; // @synthesize rainbow=_rainbow;

@end

