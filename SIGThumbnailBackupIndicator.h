//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SIGLoadingIndicatorView, UIImageView;

@interface SIGThumbnailBackupIndicator : UIView
{
    SIGLoadingIndicatorView *_spinnerView;
    UIImageView *_failedIcon;
    unsigned long long _backupStatus;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long backupStatus; // @synthesize backupStatus=_backupStatus;
- (id)initWithStatus:(unsigned long long)arg1;
- (void)reset;

@end

