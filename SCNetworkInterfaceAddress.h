//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCNetworkInterfaceAddress : NSObject
{
    NSString *_name;
    struct sockaddr *_address;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct sockaddr *address; // @synthesize address=_address;
- (void)dealloc;
- (_Bool)hasRoutableAddress;
- (id)initWithName:(char *)arg1 address:(const struct sockaddr *)arg2;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isIPv6;
- (_Bool)isWifi;
- (_Bool)isWwan;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;

@end
