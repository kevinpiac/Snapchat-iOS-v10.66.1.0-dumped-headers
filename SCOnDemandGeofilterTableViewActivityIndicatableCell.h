//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SCLoadingIndicatorView, SCOnDemandGeofilterTableViewActivityIndicatableCellViewModel;

@interface SCOnDemandGeofilterTableViewActivityIndicatableCell : UITableViewCell
{
    SCLoadingIndicatorView *_activityIndicator;
    SCOnDemandGeofilterTableViewActivityIndicatableCellViewModel *_vm;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) SCOnDemandGeofilterTableViewActivityIndicatableCellViewModel *vm; // @synthesize vm=_vm;
- (void)setupWithViewModel:(id)arg1;

@end
