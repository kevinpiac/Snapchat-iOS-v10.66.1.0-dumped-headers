//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLogout;
@protocol SCLogoutWorkflowDelegate;

@interface SCLogoutScope : NSObject
{
    id <SCLogoutWorkflowDelegate> _delegate;
    SCLogout *_logout;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SCLogoutWorkflowDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithDelegate:(id)arg1 logout:(id)arg2;
@property(readonly, nonatomic) SCLogout *logout; // @synthesize logout=_logout;

@end

