//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCBlockedExceptionAlertDelegate;

@interface SCBlockedExceptionAlertView : NSObject
{
    id <SCBlockedExceptionAlertDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCBlockedExceptionAlertDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showBlockedExceptionAlertForGroup:(id)arg1;

@end

