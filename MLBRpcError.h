//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface MLBRpcError : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(copy, nonatomic) NSString *errorCode; // @dynamic errorCode;
@property(copy, nonatomic) NSString *file; // @dynamic file;
@property(copy, nonatomic) NSString *function; // @dynamic function;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasErrorCode; // @dynamic hasErrorCode;
@property(nonatomic) _Bool hasFile; // @dynamic hasFile;
@property(nonatomic) _Bool hasFunction; // @dynamic hasFunction;
@property(nonatomic) _Bool hasLine; // @dynamic hasLine;
@property(nonatomic) unsigned int line; // @dynamic line;

@end

