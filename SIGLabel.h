//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSAttributedString, UIFont;

@interface SIGLabel : UILabel
{
    unsigned long long _typographicalStyle;
    NSAttributedString *_attributedString;
}

- (void).cxx_destruct;
- (void)_setTextUnchecked:(id)arg1;
@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void)didMoveToSuperview;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
@property(nonatomic) unsigned long long typographicalStyle; // @synthesize typographicalStyle=_typographicalStyle;
- (void)traitCollectionDidChange:(id)arg1;

// Remaining properties
@property(retain, nonatomic) UIFont *font; // @dynamic font;

@end

