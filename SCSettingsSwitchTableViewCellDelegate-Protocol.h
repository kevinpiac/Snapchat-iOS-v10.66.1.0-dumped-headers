//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, SCSettingsSwitchTableViewCell;

@protocol SCSettingsSwitchTableViewCellDelegate <NSObject>
- (void)settingsSwitchTableViewCell:(SCSettingsSwitchTableViewCell *)arg1 didToggleSwitch:(_Bool)arg2;

@optional
- (void)settingsSwitchTableViewCell:(SCSettingsSwitchTableViewCell *)arg1 didTapURL:(NSURL *)arg2;
@end

