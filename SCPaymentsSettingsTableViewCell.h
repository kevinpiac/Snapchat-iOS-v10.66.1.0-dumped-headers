//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@interface SCPaymentsSettingsTableViewCell : UITableViewCell
{
    _Bool _errorState;
    unsigned long long _mode;
    unsigned long long _theme;
}

@property(nonatomic) _Bool errorState; // @synthesize errorState=_errorState;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)isCellSelected;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)setDeselectedLayout;
- (void)setItem:(id)arg1;
- (void)setSelectedLayout;
@property(nonatomic) unsigned long long theme; // @synthesize theme=_theme;

@end

