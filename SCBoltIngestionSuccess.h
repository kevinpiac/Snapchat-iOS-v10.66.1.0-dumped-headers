//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray;

@interface SCBoltIngestionSuccess : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *contentObject; // @dynamic contentObject;
@property(retain, nonatomic) NSMutableArray *resolvedUrlsArray; // @dynamic resolvedUrlsArray;
@property(readonly, nonatomic) unsigned long long resolvedUrlsArray_Count; // @dynamic resolvedUrlsArray_Count;

@end
