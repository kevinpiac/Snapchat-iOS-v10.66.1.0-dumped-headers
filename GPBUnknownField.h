//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GPBUInt32Array, GPBUInt64Array, NSArray, NSMutableArray;

@interface GPBUnknownField : NSObject <NSCopying>
{
    int number_;
    GPBUInt64Array *mutableVarintList_;
    GPBUInt32Array *mutableFixed32List_;
    GPBUInt64Array *mutableFixed64List_;
    NSMutableArray *mutableLengthDelimitedList_;
    NSMutableArray *mutableGroupList_;
}

- (void)addFixed32:(unsigned int)arg1;
- (void)addFixed64:(unsigned long long)arg1;
- (void)addGroup:(id)arg1;
- (void)addLengthDelimited:(id)arg1;
- (void)addVarint:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
@property(readonly, nonatomic) GPBUInt32Array *fixed32List; // @synthesize fixed32List=mutableFixed32List_;
@property(readonly, nonatomic) GPBUInt64Array *fixed64List; // @synthesize fixed64List=mutableFixed64List_;
@property(readonly, nonatomic) NSArray *groupList; // @synthesize groupList=mutableGroupList_;
- (unsigned long long)hash;
- (id)initWithNumber:(int)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSArray *lengthDelimitedList; // @synthesize lengthDelimitedList=mutableLengthDelimitedList_;
- (void)mergeFromField:(id)arg1;
@property(readonly, nonatomic) int number; // @synthesize number=number_;
- (unsigned long long)serializedSize;
- (unsigned long long)serializedSizeAsMessageSetExtension;
@property(readonly, nonatomic) GPBUInt64Array *varintList; // @synthesize varintList=mutableVarintList_;
- (void)writeAsMessageSetExtensionToOutput:(id)arg1;
- (void)writeToOutput:(id)arg1;

@end

