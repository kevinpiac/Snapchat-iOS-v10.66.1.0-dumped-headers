//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNetworkInterfaceUtils : NSObject
{
}

+ (id)getIpAddressesOfRemoteHost:(id)arg1;
+ (id)stringFromAddress4:(struct sockaddr_in *)arg1;
+ (id)stringFromAddress6:(struct sockaddr_in6 *)arg1;

@end
