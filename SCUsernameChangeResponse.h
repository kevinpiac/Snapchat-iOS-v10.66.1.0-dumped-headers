//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface SCUsernameChangeResponse : NSObject
{
    _Bool _success;
    _Bool _isBadRequest;
    _Bool _isErrorResponse;
    _Bool _needsReauth;
    NSError *_errorResponse;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *errorResponse; // @synthesize errorResponse=_errorResponse;
@property(nonatomic) _Bool isBadRequest; // @synthesize isBadRequest=_isBadRequest;
@property(nonatomic) _Bool isErrorResponse; // @synthesize isErrorResponse=_isErrorResponse;
@property(nonatomic) _Bool needsReauth; // @synthesize needsReauth=_needsReauth;
@property(nonatomic) _Bool success; // @synthesize success=_success;

@end

