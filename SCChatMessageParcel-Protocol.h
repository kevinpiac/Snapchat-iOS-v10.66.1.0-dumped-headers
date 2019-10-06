//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString;

@protocol SCChatMessageParcel <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *consistentId;
@property(readonly, copy, nonatomic) NSArray *media;
@property(readonly, copy, nonatomic) NSData *payload;
@property(readonly, copy, nonatomic) NSString *tag;
@property(readonly, copy, nonatomic) NSString *tagVersion;
@property(readonly, copy, nonatomic) NSString *type;
@end

