//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GRPCOperation.h"

@interface GRPCOpRecvStatus : GRPCOperation
{
    int _statusCode;
    struct grpc_slice _details;
    unsigned long long _detailsCapacity;
    CDStruct_6f820e53 _trailers;
    const char *_errorString;
}

- (void)dealloc;
- (id)init;
- (id)initWithHandler:(CDUnknownBlockType)arg1;

@end

