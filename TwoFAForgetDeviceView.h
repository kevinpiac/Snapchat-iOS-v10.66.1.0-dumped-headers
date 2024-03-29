//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCHeaderDataSource-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCTwoFAVerifiedDeviceCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, SCHeader, UIActivityIndicatorView, UILabel, UITableView;
@protocol TwoFAForgetDeviceViewDelegate;

@interface TwoFAForgetDeviceView : UIView <SCHeaderDataSource, SCHeaderDelegate, UITableViewDataSource, UITableViewDelegate, SCTwoFAVerifiedDeviceCellDelegate>
{
    SCHeader *_header;
    id <TwoFAForgetDeviceViewDelegate> _twoFAForgetDeviceViewDelegate;
    UIView *_headerView;
    UILabel *_info;
    UITableView *_tableView;
    UIView *_footerView;
    UILabel *_forgetAllDevicesLink;
    UIActivityIndicatorView *_forgetAllDeviceIndicator;
    NSArray *_twoFAVerifiedDevices;
}

- (void).cxx_destruct;
- (id)backgroundColorForHeader;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIActivityIndicatorView *forgetAllDeviceIndicator; // @synthesize forgetAllDeviceIndicator=_forgetAllDeviceIndicator;
@property(retain, nonatomic) UILabel *forgetAllDevicesLink; // @synthesize forgetAllDevicesLink=_forgetAllDevicesLink;
- (void)forgetAllDevicesPressed;
- (void)forgetOneDevicePressed:(id)arg1;
- (id)getInfoText;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
@property(retain, nonatomic) UILabel *info; // @synthesize info=_info;
- (id)init;
- (void)initFooter;
- (void)initHeader;
- (void)initInfoView;
- (void)initTableView;
- (void)leftButtonPressed;
- (void)loadView;
- (void)refreshInfoText;
- (void)refreshLink;
- (void)reloadView;
- (void)setIsWorking:(_Bool)arg1;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <TwoFAForgetDeviceViewDelegate> twoFAForgetDeviceViewDelegate; // @synthesize twoFAForgetDeviceViewDelegate=_twoFAForgetDeviceViewDelegate;
@property(retain, nonatomic) NSArray *twoFAVerifiedDevices; // @synthesize twoFAVerifiedDevices=_twoFAVerifiedDevices;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

