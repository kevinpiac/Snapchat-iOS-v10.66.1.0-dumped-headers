//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCShareUsernameControllerDelegate;

@interface SCShareUsernameController : NSObject
{
    id <SCShareUsernameControllerDelegate> _delegate;
    long long _source;
}

- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1 source:(long long)arg2;
- (void)sharePrimaryUsername;
- (void)shareUsername:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end

