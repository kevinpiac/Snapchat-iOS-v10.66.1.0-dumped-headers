//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableDictionary;

@interface SCAlertViewActionButton : UIButton
{
    NSMutableDictionary *_backgroundColors;
    NSMutableDictionary *_borderColors;
}

+ (id)keyForControlState:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBorderColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;

@end

