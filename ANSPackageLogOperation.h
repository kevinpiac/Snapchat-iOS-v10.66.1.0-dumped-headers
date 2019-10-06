//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSString, NSURL;

@interface ANSPackageLogOperation : NSOperation
{
    NSURL *_compressedLogURL;
    NSString *_multipartMimeBoundary;
    NSURL *_packagedLogURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *compressedLogURL; // @synthesize compressedLogURL=_compressedLogURL;
- (id)initWithCompressedLogURL:(id)arg1 packagedLogURL:(id)arg2 multipartMimeBoundary:(id)arg3;
- (void)main;
@property(retain, nonatomic) NSString *multipartMimeBoundary; // @synthesize multipartMimeBoundary=_multipartMimeBoundary;
- (id)multipartURLForCompressedURL:(id)arg1 withBoundary:(id)arg2;
@property(retain, nonatomic) NSURL *packagedLogURL; // @synthesize packagedLogURL=_packagedLogURL;

@end
