//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PathValidationResult : NSObject
{
    unsigned char _operatorAtError;
    _Bool _errorInLastOperation;
    int _errorCode;
    NSString *_unexpectedCharacters;
    struct _NSRange _rangeOfError;
}

- (void).cxx_destruct;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool errorInLastOperation; // @synthesize errorInLastOperation=_errorInLastOperation;
@property(nonatomic) unsigned char operatorAtError; // @synthesize operatorAtError=_operatorAtError;
@property(nonatomic) struct _NSRange rangeOfError; // @synthesize rangeOfError=_rangeOfError;
@property(retain, nonatomic) NSString *unexpectedCharacters; // @synthesize unexpectedCharacters=_unexpectedCharacters;

@end

