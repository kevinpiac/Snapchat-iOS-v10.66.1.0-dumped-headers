//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCUserSession;

@interface SCSendConfirmationViewConfiguration : NSObject
{
    _Bool _pillEnabled;
    _Bool _showGradientLayer;
    unsigned long long _sendButtonStyle;
    NSString *_currentUserId;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentUserId; // @synthesize currentUserId=_currentUserId;
- (id)initWithSendButtonStyle:(unsigned long long)arg1 gradientLayer:(_Bool)arg2 currentUserId:(id)arg3;
- (id)initWithSendButtonStyle:(unsigned long long)arg1 gradientLayer:(_Bool)arg2 currentUserId:(id)arg3 userSession:(id)arg4;
- (id)initWithSendButtonStyle:(unsigned long long)arg1 pillEnabled:(_Bool)arg2 gradientLayer:(_Bool)arg3 currentUserId:(id)arg4 userSession:(id)arg5;
@property(nonatomic) _Bool pillEnabled; // @synthesize pillEnabled=_pillEnabled;
@property(nonatomic) unsigned long long sendButtonStyle; // @synthesize sendButtonStyle=_sendButtonStyle;
@property(nonatomic) _Bool showGradientLayer; // @synthesize showGradientLayer=_showGradientLayer;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;

@end

