//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNFileManagerGetResult-Protocol.h"

@protocol SCNShimsDataProvider;

@interface SCNFileManagerGetResult : NSObject <SCNFileManagerGetResult>
{
    id <SCNShimsDataProvider> _data;
    long long _error;
}

- (void).cxx_destruct;
- (id)getData;
- (long long)getError;
- (id)initWithData:(id)arg1;
- (id)initWithError:(long long)arg1;

@end

