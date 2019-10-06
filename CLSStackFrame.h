//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLSStackFrame : NSObject
{
    unsigned int _lineNumber;
    NSString *_symbol;
    NSString *_rawSymbol;
    NSString *_library;
    NSString *_fileName;
    unsigned long long _offset;
    unsigned long long _address;
}

+ (id)stackFrame;
+ (id)stackFrameWithAddress:(unsigned long long)arg1;
+ (id)stackFrameWithSymbol:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long address; // @synthesize address=_address;
- (id)description;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *library; // @synthesize library=_library;
@property(nonatomic) unsigned int lineNumber; // @synthesize lineNumber=_lineNumber;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *rawSymbol; // @synthesize rawSymbol=_rawSymbol;
@property(copy, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;

@end
