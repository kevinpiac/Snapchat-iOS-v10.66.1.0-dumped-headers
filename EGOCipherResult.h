//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFastEnumeration-Protocol.h"

@class NSArray, NSString;

@interface EGOCipherResult : NSObject <NSFastEnumeration>
{
    int _errorCode;
    int _columnCount;
    NSString *_errorMessage;
    NSArray *_columnNames;
    NSArray *_columnTypes;
    NSArray *_rows;
}

- (void).cxx_destruct;
@property(nonatomic) int columnCount; // @synthesize columnCount=_columnCount;
@property(copy, nonatomic) NSArray *columnNames; // @synthesize columnNames=_columnNames;
@property(copy, nonatomic) NSArray *columnTypes; // @synthesize columnTypes=_columnTypes;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
- (id)firstRow;
- (id)lastRow;
- (id)rowAtIndex:(unsigned long long)arg1;
@property(copy, nonatomic) NSArray *rows; // @synthesize rows=_rows;

@end

