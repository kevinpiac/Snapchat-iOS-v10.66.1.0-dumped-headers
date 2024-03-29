//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSString;

@interface SCGeofilterToastView : UILabel
{
    double _toastFadeInTimeSecs;
    double _toastFadeOutTimeSecs;
    double _toastOnScreenTimeSecs;
    NSString *_position;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 dict:(id)arg2;
@property(readonly, copy, nonatomic) NSString *position; // @synthesize position=_position;
@property(readonly, nonatomic) double toastFadeInTimeSecs; // @synthesize toastFadeInTimeSecs=_toastFadeInTimeSecs;
@property(readonly, nonatomic) double toastFadeOutTimeSecs; // @synthesize toastFadeOutTimeSecs=_toastFadeOutTimeSecs;
@property(readonly, nonatomic) double toastOnScreenTimeSecs; // @synthesize toastOnScreenTimeSecs=_toastOnScreenTimeSecs;

@end

