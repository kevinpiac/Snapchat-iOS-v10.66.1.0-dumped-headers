//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCReauthenticationResponse : NSObject
{
    _Bool _success;
    _Bool _unauthorized;
    _Bool _wrongPassword;
    NSString *_errorMessage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool unauthorized; // @synthesize unauthorized=_unauthorized;
@property(nonatomic) _Bool wrongPassword; // @synthesize wrongPassword=_wrongPassword;

@end

