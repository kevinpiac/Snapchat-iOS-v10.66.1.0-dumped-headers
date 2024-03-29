//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCLensURLDataFetcher.h"

@protocol SCLensArchiveConverterProtocol, SCLensSynchronousSecurity;

@interface SCLensContentDataFetcher : SCLensURLDataFetcher
{
    id <SCLensArchiveConverterProtocol> _archiveConverter;
    id <SCLensSynchronousSecurity> _signatureValidator;
}

- (void).cxx_destruct;
- (void)_completeOperationWithMetadata:(id)arg1 filePath:(id)arg2 dataLength:(unsigned long long)arg3 error:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_processZSTDTypesWithData:(id)arg1 error:(id)arg2 managedURL:(id)arg3 isValidationSuccess:(_Bool)arg4 metadata:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_requestdidFinishWithData:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchContentWithLensResource:(id)arg1 lensID:(id)arg2 cacheDomain:(id)arg3 expirationDate:(id)arg4 requestSettings:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)initWithRequestManager:(id)arg1 preferencesStorage:(id)arg2 downloadTracker:(id)arg3 archiveConverter:(id)arg4 signatureValidator:(id)arg5 experimentManager:(id)arg6;
- (id)repackToLZ4Data:(id)arg1 lensId:(id)arg2 error:(id *)arg3;
- (void)unzipData:(id)arg1 managedURL:(id)arg2 error:(id *)arg3 absolutePath:(id)arg4;

@end

