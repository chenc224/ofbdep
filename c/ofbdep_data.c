#include <stdio.h>
#include "ofbdep_data.h"


int ofbdep_field_count=715;
int ofbdep_datafile_field_count=26;

struct stru_ofbdep_field ofbdep_field[]={
	{"",'C',0,0,""},
	{"AcctManFee",'N',16,0,"�����˻�������"},
	{"InstAppSubsAmnt",'N',16,0,"����׷���Ϲ����"},
	{"InstAppSubsVol",'N',16,0,"����׷���Ϲ�����"},
	{"Address",'C',120,0,"ͨѶ��ַ"},
	{"InstReprIDCode",'C',30,0,"���˴�������֤������"},
	{"InstReprIDType",'C',1,0,"���˴���֤������"},
	{"InstReprName",'C',20,0,"���˴�������"},
	{"AppSheetSerialNo",'A',24,0,"���뵥���"},
	{"TotalSubsAmnt",'N',16,0,"�깺�ܽ��"},
	{"TotalAccptdSubsVol",'N',10,0,"�ɹ��깺�ܱ���"},
	{"TotalSubsCharge",'N',16,0,"�깺�������ܽ��"},
	{"TotalSubsVol",'N',16,0,"�깺�ܷ���"},
	{"AvailableVol",'N',16,0,"�����˿��û������"},
	{"IssueType",'C',1,0,"�����з�ʽ"},
	{"AmntReinbursed",'N',16,0,"�˻ؽ��"},
	{"BackendLoad",'N',16,0,"ÿ�ʽ��׺���շ�"},
	{"AcctBalanceInIndividualDistributor",'N',16,0,"�������ڵ������ۻ����Ļ������"},
	{"TotalVolOfDistributorInTA",'N',16,0,"�����ܷ����������ᣩ"},
	{"AcctNoOfFMInClearingAgency",'C',28,0,"������������ʽ���������Ľ����˺�"},
	{"AcctNameOfFMInClearingAgency",'C',60,0,"������������ʽ���������Ľ����˻���"},
	{"ClearingAgencyCode",'A',9,0,"�����ʽ������������"},
	{"BasisforCalculatingDividend",'N',16,0,"����/������Ͷ�ʻ���"},
	{"InvestorsBirthday",'A',8,0,"Ͷ���˳�������"},
	{"DefDividendMethod",'A',1,0,"Ĭ�Ϸֺ췽ʽ"},
	{"DiscountRateOfCommission",'N',5,4,"����Ӷ���ۿ���"},
	{"",'C',0,0,""},
	{"CertificateType",'C',1,0,"����֤�����ͼ�����֤������"},
	{"DepositAcct",'C',19,0,"Ͷ�����������˴����ڽ��׵��ʽ��˺�"},
	{"RegionCode",'A',4,0,"�������ڵ������"},
	{"TransferDateFromCustodian",'A',8,0,"�����ʽ����й��˴���������"},
	{"TransferDateThroughClearingAgency",'A',8,0,"�����ʽ������˻�������"},
	{"TransactionCfmDate",'A',8,0,"����ȷ������"},
	{"AnnContent",'C',4000,0,"��������"},
	{"CodeOfTargetFund",'A',6,0,"ת��ʱ��Ŀ��������"},
	{"MinAmountByInst",'N',16,0,"�����״��Ϲ���ͽ��"},
	{"MinVolByInst",'N',16,0,"�����״��Ϲ���ͷ���"},
	{"CurrencyType",'A',3,0,"�������"},
	{"CustodianCode",'C',3,0,"�й��˴���"},
	{"AmountOfPeriodicSubs",'N',16,0,"��ʱ�����깺�Ľ��"},
	{"DateOfPeriodicSubs",'A',8,0,"��ʱ�����깺����"},
	{"VolOfDividendforReinvestment",'N',16,0,"�����˻�������Ͷ�ʻ������"},
	{"DividentDate",'A',8,0,"�ֺ���/������"},
	{"DividendAmount",'N',16,0,"�����˻������ʽ�"},
	{"TotalDividendAmount",'N',16,0,"��������ܶ�"},
	{"DividendOrShare",'A',1,0,"����/������Ͷ�ʱ�־,"},
	{"XRDate",'A',8,0,"��Ȩ��"},
	{"DownLoaddate",'A',8,0,"���������´�����"},
	{"EducationLevel",'C',3,0,"Ͷ����ѧ��"},
	{"EmailAddress",'C',40,0,"Ͷ����E-MAIL��ַ"},
	{"TotalDividendIndeed",'N',16,0,"����ʵ�������ܽ��"},
	{"FaxNo",'C',24,0,"Ͷ���˴������"},
	{"Charge",'N',10,0,"������"},
	{"AgencyFee",'N',10,0,"������"},
	{"ChargeRate",'N',6,4,"��������"},
	{"TotalTransFee",'N',10,0,"����ȷ�Ϸ��úϼ�"},
	{"TotalFeeForDividend",'N',10,0,"�ֺ���úϼ�"},
	{"AnnouncementNo",'C',13,0,"�����ļ���"},
	{"FreezingDeadline",'A',8,0,"�����ֹ����"},
	{"TotalFrozenVol",'N',16,0,"���𶳽��ܷ���"},
	{"FrozenCause",'A',1,0,"����ԭ��"},
	{"FrontendFee",'N',16,0,"ÿ�ʽ���ǰ���շ�"},
	{"ConfirmedVol",'N',16,0,"�����˻�����ȷ�Ϸ���"},
	{"FundName",'C',40,0,"��������"},
	{"ConfirmedAmount",'N',16,0,"ÿ�ʽ���ȷ�Ͻ��"},
	{"VocationCode",'C',3,0,"Ͷ����ְҵ����"},
	{"TotalFundVol",'N',16,0,"�����ܷ���"},
	{"FundCode",'C',6,0,"�������"},
	{"FundStatus",'C',1,0,"����״̬"},
	{"HomeTelNo",'C',22,0,"Ͷ����סַ�绰"},
	{"MaxRedemptionVol",'N',16,0,"���������ط���"},
	{"MinAccountBalance",'N',16,0,"������ͳ��з���"},
	{"CertificateNo",'C',30,0,"Ͷ����֤������"},
	{"AnnualIncome",'N',8,0,"Ͷ����������"},
	{"AnnouncementDate",'A',8,0,"��������"},
	{"AnnouncementType",'A',1,0,"�������"},
	{"Interest",'N',10,0,"�����˻���Ϣ���"},
	{"BackAmountByInvalid",'N',16,0,"��Ϊ��Ч������Ͷ���˵��ʽ�"},
	{"IPOStartDate",'A',8,0,"����ļ����ʼ����"},
	{"IPOEndDate",'A',8,0,"����ļ����������"},
	{"LargeRedemptionFlag",'A',1,0,"�޶���ش�����־"},
	{"LengthOfAnnouncement",'N',10,0,"�������ݳ���"},
	{"FundManagerCode",'C',3,0,"���������"},
	{"MobileTelNo",'C',24,0,"Ͷ�����ֻ�����"},
	{"MultiAcctFlag",'A',1,0,"������������־"},
	{"InvestorName",'C',120,0,"Ͷ���˻���"},
	{"NAV",'N',7,4,"����λ��ֵ"},
	{"BranchCode",'C',9,0,"�������"},
	{"OfficeTelNo",'C',22,0,"Ͷ���˵�λ�绰����"},
	{"OriginalSerialNo",'A',20,0,"TA��ԭȷ����ˮ��"},
	{"OriginalAppSheetNo",'A',24,0,"ԭ���뵥���"},
	{"OriginalSubsDate",'A',8,0,"ԭ�깺����"},
	{"TransactionDate",'A',8,0,"���׷�������"},
	{"TransactionTime",'A',6,0,"���׷���ʱ��"},
	{"OtherFee1",'N',10,0,"��������1"},
	{"OtherFee2",'N',16,0,"��������2"},
	{"OtherFee3",'N',16,0,"��������3"},
	{"TargetDistributorCode",'C',9,0,"�Է������˴���"},
	{"IndividualOrInstitution",'A',1,0,"����/������־"},
	{"IndiAppSubsVol",'N',16,0,"����׷���Ϲ�����"},
	{"IndiAppSubsAmount",'N',16,0,"����׷���Ϲ����"},
	{"PostCode",'A',6,0,"Ͷ������������"},
	{"RedemptionDateInAdvance",'A',8,0,"ԤԼ�������"},
	{"IPOPrice",'N',7,4,"���м۸�"},
	{"MinSubsVolByIndi",'N',16,0,"�����״��Ϲ���ͷ���"},
	{"MinSubsAmountByIndi",'N',16,0,"�����״��Ϲ���ͽ��"},
	{"TransactorCertNo",'C',30,0,"������֤������"},
	{"TransactorCertType",'C',1,0,"������֤������,"},
	{"TransactorName",'C',20,0,"����������"},
	{"TotalRedemptionAmount",'N',16,0,"��������ܽ��"},
	{"TotalTransactionOfSuccessfulRedemption",'N',10,0,"�ɹ�����ܱ���"},
	{"TotalFeeOfRedemption",'N',16,0,"����������ܽ��"},
	{"VolOnRegistraionDate",'N',16,0,"Ȩ��Ǽ��ջ����˻�����"},
	{"RegistrationDate",'A',8,0,"Ȩ��Ǽ�����"},
	{"RegistrarCode",'C',2,0,"ע��Ǽ��˴���"},
	{"RegistrationFee",'N',16,0,"ע��ǼǷ�"},
	{"TotalReinvestmentDividend",'N',16,0,"�����Զ���Ͷ���ܽ��"},
	{"BackAmountByExcess",'N',16,0,"��Ϊʣ�������Ͷ���˵��ʽ�"},
	{"TotalRedemptionVol",'N',16,0,"����ܷ���"},
	{"ReturnCode",'A',4,0,"���״������ش���"},
	{"TransactionAccountID",'A',17,0,"Ͷ���˻������˺�"},
	{"DistributorCode",'C',9,0,"�����˴���"},
	{"AccountAbbr",'C',12,0,"Ͷ���˻������"},
	{"DividendRatio",'N',16,0,"��������"},
	{"ConfidentialDocumentCode",'C',8,0,"�ܺ����"},
	{"DocumentSendDate",'A',8,0,"�ļ���������"},
	{"Sex",'A',1,0,"Ͷ�����Ա�"},
	{"SHSecuritiesAccountID",'C',10,0,"�Ͻ���֤ȯ�˺�"},
	{"SZSecuritiesAccountID",'C',10,0,"���֤ȯ�˺�"},
	{"FundSize",'N',16,0,"�����ģ"},
	{"FundSponsor",'A',3,0,"��������"},
	{"AnnouncementTitle",'C',100,0,"�������"},
	{"ApplicationVol",'N',16,0,"����������"},
	{"TradingPrice",'N',7,4,"���׼۸�"},
	{"ApplicationAmount",'N',16,0,"������"},
	{"BusinessCode",'A',3,0,"ҵ�����"},
	{"TAAccountID",'C',12,0,"Ͷ���˻����˺�"},
	{"TASerialNO",'A',20,0,"TAȷ�Ͻ�����ˮ��"},
	{"StampDuty",'N',16,0,"ӡ��˰"},
	{"Tax",'N',16,0,"˰��"},
	{"TelNo",'C',22,0,"Ͷ���˵绰����"},
	{"TargetBranchCode",'C',9,0,"�Է������"},
	{"TargetTransactionAccountID",'A',17,0,"�Է������˴�Ͷ���˻������˺�"},
	{"AggregationOfTransactionByBusinessType",'N',8,0,"ÿ��ҵ���������"},
	{"AggregationDate",'A',8,0,"��������"},
	{"TotalVol",'N',16,0,"�����������"},
	{"TotalAmount",'N',16,0,"���������"},
	{"TargetTAAccountID",'C',12,0,"�Է������˺�"},
	{"TrailCommission",'N',16,0,"β��Ӷ��"},
	{"UpdateDate",'A',8,0,"����ֵ����"},
	{"ValidPeriod",'N',2,0,"����������Ч����"},
	{"FaceValue",'N',7,4,"������ֵ"},
	{"TargetRegionCode",'A',4,0,"�Է����ڵ������"},
	{"TotalFailingVol",'N',16,0,"ʧ�ܷ�������"},
	{"TotalSuccessfulVol",'N',16,0,"�ɹ���������"},
	{"DividendPerUnit",'N',16,0,"��λ����ֺ����˰��"},
	{"InterestTax",'N',16,0,"��Ϣ˰"},
	{"FundVolBalance",'N',16,0,"����������"},
	{"BeginAllotNo",'N',12,0,"��ſ�ʼ��"},
	{"EndAllotNo",'N',12,0,"��Ž�����"},
	{"TotalAllotNo",'N',12,0,"�������"},
	{"CfmVolOfTargetFund",'N',16,0,"Ŀ������ȷ�Ϸ���"},
	{"TargetNAV",'N',7,4,"Ŀ�����ĵ�λ��ֵ"},
	{"TargetFundPrice",'N',7,4,"Ŀ�����ļ۸�"},
	{"TradingMethod",'C',8,0,"ʹ�õĽ����ֶ�"},
	{"ContractNo",'A',20,0,"��Լ���"},
	{"SelfHelp",'C',1,0,"�����ն�"},
	{"MinorFlag",'C',1,0,"δ�����˱�־"},
	{"",'C',0,0,""},
	{"DeliverType",'C',1,0,"���˵�����ѡ��"},
	{"TransactorIDType",'C',1,0,"������ʶ��ʽ"},
	{"AccountCardID",'C',8,0,"�����˻�����ƾ֤��"},
	{"TotalFrontendFee",'N',16,0,"����ǰ���շ��ܶ�"},
	{"TotalBackendLoad",'N',16,0,"���׺���շ��ܶ�"},
	{"TotalFailingAmount",'N',16,0,"ʧ�ܽ�����"},
	{"TotalSuccessfulAmount",'N',16,0,"�ɹ�������"},
	{"TransferDirection",'A',1,0,"ת��/ת����ʶ"},
	{"BusinessFinishFlag",'C',1,0,"ҵ�������ȫ������ʶ"},
	{"TotalFailingDealingNum",'N',6,0,"ʧ�ܽ��ױ���"},
	{"TotalSuccessfulDealingNum",'N',6,0,"�ɹ����ױ���"},
	{"ConvertStatus",'C',1,0,"����ת��״̬"},
	{"AcctNameOfInvestorInClearingAgency",'C',60,0,"Ͷ�����տ������˻�����"},
	{"AcctNoOfInvestorInClearingAgency",'C',28,0,"Ͷ�����տ������˻��˺�"},
	{"ClearingAgency",'A',9,0,"Ͷ�����տ������˻�������"},
	{"UnFrozenBalance",'N',16,0,"�ⶳ�������"},
	{"BusinessOrganiger",'C',3,0,"ҵ�����˴���"},
	{"AccountType",'C',1,0,"�˻�����"},
	{"FrozenBalance",'N',16,0,"������"},
	{"FrozenShares",'N',16,0,"���������Ͷ�ʷ���"},
	{"TotalFare",'N',16,0,"���׷��û���"},
	{"VastRedeemFlag",'C',1,0,"�޶���ر�־"},
	{"TermOfPeriodicSubs",'N',5,0,"��ʱ�����깺����"},
	{"FutureBuyDate",'A',8,0,"ָ���깺����"},
	{"RateFee",'N',9,8,"����"},
	{"MinFee",'N',10,0,"�����շ�"},
	{"DaysRedemptionInAdvance",'N',5,0,"ԤԼ��ع���������"},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"MaxSubsVolByIndi",'N',16,0,"��������Ϲ�����"},
	{"MaxSubsAmountByIndi",'N',16,0,"��������Ϲ����"},
	{"MaxSubsVolByInst",'N',16,0,"��������Ϲ�����"},
	{"MaxSubsAmountByInst",'N',16,0,"��������Ϲ����"},
	{"UnitSubsVolByIndi",'N',16,0,"�����Ϲ�������λ"},
	{"UnitSubsAmountByIndi",'N',16,0,"�����Ϲ���λ"},
	{"UnitSubsVolByInst",'N',16,0,"�����Ϲ�������λ"},
	{"UnitSubsAmountByInst",'N',16,0,"�����Ϲ���λ"},
	{"MinBidsAmountByIndi",'N',16,0,"�����״��깺��ͽ��"},
	{"MinBidsAmountByInst",'N',16,0,"�����״��깺��ͽ��"},
	{"MinAppBidsAmountByIndi",'N',16,0,"����׷���깺��ͽ��"},
	{"MinAppBidsAmountByInst",'N',16,0,"����׷���깺��ͽ��"},
	{"MinRedemptionVol",'N',16,0,"����������ط���"},
	{"MinInterconvertVol",'N',16,0,"��ͻ���ת������"},
	{"IssueTypeByIndi",'C',1,0,"���˷��з�ʽ"},
	{"IssueTypeByInst",'C',1,0,"�������з�ʽ"},
	{"SubsType",'C',1,0,"�Ϲ���ʽ"},
	{"CollectFeeType",'C',1,0,"���׷���ȡ��ʽ"},
	{"NextTradeDate",'A',8,0,"��һ������"},
	{"SalerNetReceivableAmount",'N',16,0,"�����˾��ս�����"},
	{"SalerNetPayableAmount",'N',16,0,"�����˾���������"},
	{"SalerTotalFee",'N',16,0,"��������ȡ�����ܶ�"},
	{"SalerBuyFee",'N',16,0,"��������ȡ�깺����"},
	{"SalerBidFee",'N',16,0,"��������ȡ��ط���"},
	{"FundTotalFee",'N',16,0,"��ط����ܶ�۳������ڻ����ʲ����֣�"},
	{"RaiseTotalAmount",'N',16,0,"�Ϲ��ʽ��ܶ�"},
	{"AccumulativeTotalRaiseAmount",'N',16,0,"�ۼ��Ϲ��ʽ��ܶ�"},
	{"RaiseInterest",'N',16,0,"�Ϲ��ڼ���Ϣ"},
	{"SalerRaiseFee",'N',16,0,"�������Ϲ���"},
	{"ConversionInAmount",'N',16,0,"ת���"},
	{"ConvertingToAmount",'N',16,0,"ת����"},
	{"SalerExchangeFee",'N',16,0,"������ת����"},
	{"BidTax",'N',16,0,"�깺ӡ��˰"},
	{"RedemptionTax",'N',16,0,"���ӡ��˰"},
	{"IndividualCapitalGainTax",'N',16,0,"�ֺ������������˰"},
	{"InstituteCapitalGainTax",'N',16,0,"�ֺ������������˰"},
	{"IndividualIncomeTax",'N',16,0,"�ֺ������ֵ����˰"},
	{"InstituteIncomeTax",'N',16,0,"�ֺ������ֵ����˰"},
	{"SalerReinvestmentFee",'N',16,0,"��������Ͷ�ʷ�"},
	{"SubFeeRetTA",'N',16,0,"�깺��ע��Ǽ������÷���"},
	{"RedemFeeRetTA",'N',16,0,"��ع�ע��Ǽ������÷���"},
	{"TotalTransInAmount",'N',16,0,"����ת�����ܽ��"},
	{"TotalFeeOfTransInAmount",'N',16,0,"����ת�����������ܽ��"},
	{"TotalTransInVol",'N',16,0,"����ת�����ܷ���"},
	{"TotalTransOutAmount",'N',16,0,"����ת�����ܽ��"},
	{"TotalFeeOfTransOutAmount",'N',16,0,"����ת�����������ܽ��"},
	{"TotalTransOutVol",'N',16,0,"����ת�����ܷ���"},
	{"BidTrade",'N',13,0,"�ɹ��깺�ܻ���"},
	{"RedeemTrade",'N',13,0,"�ɹ�����ܻ���"},
	{"FreezeTotal",'N',16,0,"�����ܷ���"},
	{"ManagerCode",'A',3,0,"�����˴���"},
	{"NetBidTotalAmount",'N',16,0,"�깺�ɹ��ʽ��ܶ�������ã�����˰��"},
	{"NetRedeemTotalAmount",'N',16,0,"��سɹ��ʽ��ܶ�������ã�����˰��"},
	{"CreditDebit",'N',1,0,"�������"},
	{"RedemptionFee",'N',16,0,"��ط�"},
	{"NetSettlement",'N',16,0,"�ʽ����㾻��"},
	{"Specification",'C',60,0,"ժҪ/˵��"},
	{"TransferFee",'N',10,0,"������"},
	{"FromTAFlag",'A',1,0,"�Ƿ�ע��Ǽ��˷���ҵ���־"},
	{"FrozenMethod",'A',1,0,"���᷽ʽ"},
	{"OriginalAppDate",'A',8,0,"ԭ��������"},
	{"TotalBackendLoadVol",'N',16,0,"���׺���շ��ܷ���"},
	{"ShareClass",'A',1,0,"�շѷ�ʽ"},
	{"OriginalCfmDate",'A',8,0,"TA��ԭȷ������"},
	{"RedemptionInAdvanceFlag",'A',1,0,"ԤԼ��ر�־"},
	{"RedemptionReason",'A',1,0,"ǿ�����ԭ��"},
	{"DetailFlag",'A',1,0,"��ϸ��־"},
	{"DeliverWay",'C',8,0,"���˵����ͷ�ʽ"},
	{"VolumeByInterest",'N',16,0,"��Ϣ�����Ļ������"},
	{"ValueLine",'N',7,0,"��Ʒ��ֵ����ֵ"},
	{"AccountStatus",'A',1,0,"�˻�״̬"},
	{"BeginDateOfPeriodicSubs",'A',8,0,"��ʱ�����깺��ʼ����"},
	{"EndDateOfPeriodicSubs",'A',8,0,"��ʱ�����깺��ֹ����"},
	{"SendDayOfPeriodicSubs",'N',2,0,"��ʱ�����깺ÿ���ڷ�����"},
	{"TotalVolumeofReinvestmentDividend",'N',16,0,"������Ͷ�ʷݶ��ܶ�"},
	{"AccumulativeNAV",'N',7,4,"�ۼƻ���λ��ֵ"},
	{"ShareRegisterDate",'A',8,0,"�ݶ�ע������"},
	{"LargeBuyFlag",'A',1,0,"�޶������־"},
	{"FeeCalculator",'A',1,0,"�Ʒ���"},
	{"IndiAcctCfmRate",'N',5,4,"�����˻�ȷ�ϱ���"},
	{"InstAcctCfmRate",'N',5,4,"�����˻�ȷ�ϱ���"},
	{"GenAcctCfmRate",'N',5,4,"�ۺ��˻�ȷ�ϱ���"},
	{"VarietyCodeOfPeriodicSubs",'C',5,0,"��ʱ����Ʒ�ִ���"},
	{"SerialNoOfPeriodicSubs",'C',5,0,"��ʱ�����깺���"},
	{"CorpName",'C',40,0,"������λ����"},
	{"RefundAmount",'N',16,0,"�˿���"},
	{"SecuritiesAccountID",'C',10,0,"֤ȯ�˺�"},
	{"SalePercent",'N',8,5,"���۱���"},
	{"CertValidDate",'A',8,0,"֤����Ч����"},
	{"InstTranCertValidDate",'A',8,0,"��������������֤����Ч����"},
	{"InstReprCertValidDate",'A',8,0,"������������֤����Ч����"},
	{"ClientRiskRate",'C',1,0,"�ͻ����յȼ�"},
	{"InstReprManageRange",'C',2,0,"�������˾�Ӫ��Χ"},
	{"ControlHolder",'C',80,0,"�عɹɶ�"},
	{"ActualController",'C',80,0,"ʵ�ʿ�����"},
	{"MarriageStatus",'C',1,0,"����״��"},
	{"FamilyNum",'N',2,0,"��ͥ�˿���"},
	{"Penates",'N',16,0,"��ͥ�ʲ�"},
	{"MediaHobby",'C',1,0,"ý��ƫ��"},
	{"CustomerNo",'C',12,0,"TA�ͻ����"},
	{"RationProtocolNo",'C',20,0,"���ڶ���Э���"},
	{"RationType",'C',1,0,"���ڶ�������"},
	{"BreachFee",'N',16,0,"ΥԼ��"},
	{"SalesPromotion",'C',3,0,"���������"},
	{"AcceptMethod",'C',1,0,"������ʽ"},
	{"ForceRedemptionType",'C',1,0,"ǿ���������"},
	{"AllowBreachRedempt",'C',1,0,"����ΥԼ��ر�־"},
	{"PunishFee",'N',16,0,"�ͷ��Է���"},
	{"BreachFeeBackToFund",'N',16,0,"ΥԼ�������ʲ����"},
	{"FutureSubscribeDate",'A',8,0,"ָ���Ϲ�����"},
	{"TotalDivident",'N',8,5,"�ۻ���λ�ֺ�"},
	{"ErrorDetail",'C',60,0,"������ϸ��Ϣ"},
	{"FundType",'C',2,0,"��������"},
	{"PointsType",'C',1,0,"��������"},
	{"Points",'N',15,0,"����ֵ"},
	{"FundCorpCode",'C',8,0,"����˾����"},
	{"FundServerTel",'C',30,0,"����˾�ͷ��绰"},
	{"FundInternetAddress",'C',40,0,"����˾��վ��ַ"},
	{"PointsStatus",'C',1,0,"����״̬"},
	{"AnnouncFlag",'C',1,0,"�����־"},
	{"TransferPermitFlag",'C',1,0,"���г�ת��������־"},
	{"InstAccount",'C',30,0,"�����˽��㷨���ʽ��ʺ�"},
	{"CapitalType",'C',3,0,"�ʽ�����"},
	{"ReceOrPayFlag",'C',1,0,"�ո���־"},
	{"CalculateDate",'A',8,0,"��������"},
	{"PayDate",'A',8,0,"��������"},
	{"SeatCode",'C',6,0,"ϯλ����"},
	{"InstitutionType",'C',1,0,"��������"},
	{"DistributorName",'C',80,0,"����������"},
	{"TakeIncomeFlag",'C',1,0,"���������־"},
	{"PurposeOfPeSubs",'C',40,0,"��ͶĿ��"},
	{"FrequencyOfPeSubs",'N',5,0,"��ͶƵ��"},
	{"BatchNumOfPeSubs",'N',16,0,"��Ͷ����"},
	{"FundTypeName",'C',30,0,"������������"},
	{"RegistrarName",'C',40,0,"ע��Ǽ�������"},
	{"FundManagerName",'C',40,0,"�������������"},
	{"EnglishFirstName",'C',20,0,"Ͷ����Ӣ����"},
	{"EnglishFamliyName",'C',20,0,"Ͷ����Ӣ����"},
	{"Vocation",'C',4,0,"��ҵ"},
	{"CorpoProperty",'C',2,0,"��ҵ����"},
	{"StaffNum",'N',16,0,"Ա������"},
	{"Hobbytype",'C',2,0,"��Ȥ��������"},
	{"Province",'C',6,0,"ʡ/ֱϽ��"},
	{"City",'C',6,0,"��"},
	{"County",'C',6,0,"��/��"},
	{"CommendPerson",'C',40,0,"�Ƽ���"},
	{"CommendPersonType",'C',1,0,"�Ƽ�������"},
	{"CapitalMode",'C',2,0,"�ʽ�ʽ"},
	{"DetailCapticalMode",'C',2,0,"��ϸ�ʽ�ʽ"},
	{"BackenloadDiscount",'N',54,0,"������ۿ���"},
	{"CombineNum",'C',6,0,"��ϱ��"},
	{"AlternationDate",'A',8,0,"��������"},
	{"TargetDistributorType",'C',1,0,"�Է�����������"},
	{"XRValue",'N',16,0,"��λ��Ȩֵ"},
	{"XRValueFlag",'C',1,0,"��λ��Ȩֵ����"},
	{"XRType",'C',1,0,"��Ȩ����"},
	{"DividendType",'C',1,0,"�ֺ�����"},
	{"SequenceNO",'A',20,0,"���"},
	{"OperateDate",'A',8,0,"��Ч����"},
	{"VolLowerLimit",'N',16,0,"�ݶ�����"},
	{"VolUpperLimit",'N',16,0,"�ݶ�����"},
	{"AmountLowerLimit",'N',16,0,"�������"},
	{"AmountUpperLimit",'N',16,0,"�������"},
	{"DaysLowerLimit",'N',5,0,"��������"},
	{"DaysUpperLimit",'N',5,0,"��������"},
	{"MaxFee",'N',16,0,"��߷���"},
	{"",'C',0,0,""},
	{"GetFeeRateMethod",'C',1,0,"ȡ���ʷ�ʽ"},
	{"FeeRateFlag",'C',1,0,"���ʱ�־"},
	{"FundNameAbbr",'C',20,0,"������"},
	{"IsGuaranteedFund",'C',1,0,"�Ƿ񱣱�����"},
	{"IsLOFFund",'C',1,0,"�Ƿ�LOF����"},
	{"IsQDIIFund",'C',1,0,"�Ƿ�QDII����"},
	{"IsETFFund",'C',1,0,"�Ƿ�ETF����"},
	{"RedeemFeeBackRatio",'N',16,0,"��طѹ�����ʲ�����"},
	{"FundEstablishDate",'A',8,0,"�����������"},
	{"ConstantFee",'N',16,0,"�̶�����"},
	{"IsDiscount",'C',1,0,"�Ƿ���������"},
	{"BuyPayPeriod",'N',16,0,"�깺��������"},
	{"RedemptionPayPeriod",'N',16,0,"��ؽ�������"},
	{"ConversionPayPeriod",'N',16,0,"����ת����������"},
	{"ChargePayMethod",'C',1,0,"�����ѽ��㷽ʽ"},
	{"CompareProportion",'N',16,8,"��Ա���"},
	{"CompareCapitalType",'C',3,0,"����ʽ�����"},
	{"SubPayBackPeriod",'N',16,0,"�Ϲ��˿������"},
	{"DividendPayPeriod",'N',16,0,"�ֺ콻������"},
	{"WholeFlag",'C',1,0,"ȫ����־"},
	{"ModifyWay",'C',1,0,"�޸ķ�ʽ"},
	{"ChangeAgencyFee",'N',16,0,"ת��������"},
	{"RecuperateAgencyFee",'N',16,0,"���������"},
	{"RedemptionSequence",'C',1,0,"ָ����ط�ʽ"},
	{"BuyUpperAmount",'N',16,0,"�깺�������"},
	{"CovertInUpperAmount",'N',16,0,"����ת��ת��������"},
	{"PeriodSubUpperAmount",'N',16,0,"��ʱ�����깺�������"},
	{"ChargeType",'C',1,0,"�շ�����"},
	{"SpecifyRateFee",'N',9,8,"ָ������"},
	{"SpecifyFee",'N',16,0,"ָ������"},
	{"PeriodSubTimeUnit",'C',1,0,"��Ͷ���ڵ�λ"},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"FundIncome",'N',8,5,"���һ������������"},
	{"FundIncomeFlag",'C',1,0,"���һ��������������"},
	{"Yield",'N',8,5,"���һ�������������"},
	{"YieldFlag",'C',1,0,"���һ�����������������"},
	{"GuaranteedNAV",'N',7,4,"������ֵ"},
	{"HandleCharge",'N',10,0,"���ַ�"},
	{"UndistributeMonetaryIncome",'N',16,0,"���һ���δ��������"},
	{"GuaranteedAmount",'N',16,0,"ʣ�ౣ�����"},
	{"ExchangeFlag",'C',1,0,"��������־"},
	{"UndistributeMonetaryIncomeFlag",'C',1,0,"���һ���δ������������"},
	{"Ref",'C',10,0,"ȯ����"},
	{"Internet",'C',1,0,"INTERNET����"},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"ShareType",'C',1,0,"�ݶ����"},
	{"Nationality",'C',3,0,"Ͷ���߹���"},
	{"",'C',0,0,""},
	{"NetNo",'C',9,0,"���������㣩������"},
	{"",'C',0,0,""},
	{"TargetShareType",'C',1,0,"�Է�����ݶ����"},
	{"SourceType",'C',1,0,"�ݶ�ԭʼ��Դ"},
	{"",'C',0,0,""},
	{"VastRedeemRatio",'N',98,0,"�޶���ض��ֱ���"},
	{"Broker",'C',12,0,"������"},
	{"",'C',0,0,""},
	{"ProtocalEndDate",'A',8,0,"Э���ֹ����"},
	{"RationDate",'N',5,0,"���ڶ����ָ������"},
	{"",'C',0,0,""},
	{"FundDayIncomeFlag",'C',1,0,"����������������"},
	{"FundDayIncome",'N',16,0,"������������"},
	{"CustomerID",'C',12,0,"�ͻ���"},
	{"RationKind",'C',3,0,"���ڶ���Ʒ�ִ���"},
	{"BelongFundAssetFare",'N',16,0,"������ʲ���"},
	{"BackFare",'N',16,0,"����������"},
	{"RecuperateFee",'N',16,0,"�����"},
	{"ChangeFee",'N',16,0,"ת����"},
	{"AchievementPay",'N',16,0,"ҵ������"},
	{"AchievementCompen",'N',16,0,"ҵ������"},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"OverAmount",'N',16,0,"���볬�޽��"},
	{"OverShares",'N',16,0,"���볬�޷ݶ�"},
	{"CapitalGainTax",'N',16,0,"��������˰"},
	{"CashDividendFee",'N',16,0,"�ֽ�ֺ�������"},
	{"ConfirmPayDate",'C',8,0,"ȷ��֧������"},
	{"NetValueDate",'C',8,0,"��ֵ����"},
	{"NetValueType",'C',1,0,"��ֵ����"},
	{"FundYearIncomeRate",'N',8,5,"���һ�����������"},
	{"FundYearIncomeRateFlag",'C',1,0,"���һ���������������"},
	{"BeginInterestDate",'C',8,0,"��Ϣ����"},
	{"LofDataType",'C',1,0,"LOF�������"},
	{"ManagerRealRatio",'N',7,4,"ʵ�ʼ����ۿ�"},
	{"CostPrice",'N',7,4,"�ɱ���"},
	{"GeneralTASerialNO",'A',20,0,"��TAȷ����ˮ��"},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"",'C',0,0,""},
	{"DrawBonusUnit",'N',10,0,"�ֺ쵥λ"},
	{"FrozenSharesforReinvest",'N',16,0,"������Ͷ�ʷݶ�"},
	{"SharesAdjustmentFlag",'C',1,0,"�ݶ�ǿ�Ƶ�����־"},
	{"PeriodicStatus",'C',1,0,"���ڶ���״̬"},
	{"TransferAgencyStatus",'C',1,0,"ת�й�״̬"},
	{"TransactionAccountStatus",'C',1,0,"�����˻�״̬"},
	{"RationNo",'C',3,0,"���ڶ������"},
	{"AchievementPayFlag",'C',1,0,"ҵ����������"},
	{"IndiMaxPurchase",'N',16,0,"��������깺���"},
	{"InstMaxPurchase",'N',16,0,"��������깺���"},
	{"IndiDayMaxSumBuy",'N',16,0,"���˵����ۼƹ��������"},
	{"InstDayMaxSumBuy",'N',16,0,"���˵����ۼƹ��������"},
	{"IndiDayMaxSumRedeem",'N',16,0,"���˵����ۼ�������ݶ�"},
	{"InstDayMaxSumRedeem",'N',16,0,"���˵����ۼ�������ݶ�"},
	{"IndiMaxRedeem",'N',16,0,"���������طݶ�"},
	{"InstMaxRedeem",'N',16,0,"���������طݶ�"},
	{"TargetRegistrarCode",'C',2,0,"�Է�TA����"},
	{"AllowRedemptDate",'A',8,0,"���������"},
	{"AddFlag",'C',1,0,"��ɾ��־"},
	{"ContractType",'C',1,0,"��ͬ����"},
	{"SerialNo",'C',26,0,"��ˮ��"},
	{"Version",'C',3,0,"�汾��"},
	{"SignType",'C',1,0,"ǩ������"},
	{"AcceptPlace",'C',40,0,"�����ص�"},
	{"Notes",'C',64,0,"������Ϣ"},
	{"SignRiskNotice",'C',1,0,"��ǩ����ս�ʾ��"},
	{"RiskMatching",'C',1,0,"���ճ�������ƥ�����"},
	{"CardNo",'C',32,0,"����"},
	{"SecondStatus",'C',1,0,"�ڶ���;״̬"},
	{"ThirdStatus",'C',1,0,"������;״̬"},
	{"SecondNotes",'C',64,0,"�ڶ���;��Ϣ"},
	{"ThirdNotes",'C',64,0,"������;��Ϣ"},
	{"SecondDate",'C',8,0,"�ڶ���;����"},
	{"ThirdDate",'C',8,0,"������;����"},
	{"ReservedField1",'C',20,0,"Ԥ���ֶ�1"},
	{"ReservedField2",'C',20,0,"Ԥ���ֶ�2"},
	{"ReservedField3",'C',30,0,"Ԥ���ֶ�3"},
	{"ReservedField4",'N',16,0,"Ԥ���ֶ�4"},
	{"ReservedField5",'N',16,0,"Ԥ���ֶ�5"},
	{"TAAccountID2",'C',35,0,"Ͷ���˻����ʺ�"},
	{"FundCode2",'C',12,0,"�������"},
	{"CodeOfTargetFund2",'C',12,0,"ת��ʱ��Ŀ��������"},
	{"Charge2",'N',16,0,"������"},
	{"AgencyFee2",'N',16,0,"������"},
	{"PayAmount",'N',16,0,"���ս��"},
	{"FundManagerCode2",'C',18,0,"���������"},
	{"CustodianCode2",'C',18,0,"�й��˴���"},
	{"RegistrarCode2",'C',18,0,"ע��Ǽ��˴���"},
	{"RegRegionCode",'C',2,0,"ע��ع��Ҵ���"},
	{"SaleRegionCode",'C',2,0,"���۵ع��Ҵ���"},
	{"MainFundCode",'C',6,0,"���������"},
	{"ClassFlag",'C',1,0,"�ּ���ʶ"},
	{"PriorFlag",'C',1,0,"�����Ӻ��ʶ"},
	{"FundEndDate",'C',8,0,"������"},
	{"RelationUsage",'C',2,0,"��ϵ��;"},
	{"AccumulativePerDiv",'N',16,0,"�ۻ���λ�ֺ�"},
	{"MarketFlag",'C',1,0,"�г���־"},
	{"StockAccount",'C',10,0,"��Ʊ�˻�"},
	{"TaxRatio",'N',7,4,"��˰����"},
	{"RatioDate",'C',8,0,"��������"},
	{"DestinationCode",'C',6,0,"�����ʽ�ȫ��Ͷ���Ʒ����"},
	{"PublicFlag",'C',1,0,"��ļ��ʶ"},
	{"DistributorCode2",'C',18,0,"�����˴���2"},
	{"InvestorType",'C',3,0,"Ͷ��������"},
	{"InvestorProCode",'C',6,0,"Ͷ���߲�Ʒ����"},
	{"PriorSequence",'A',2,0,"�ּ�����˳��"},
	{"TargetDistributorCode2",'C',18,0,"�Է������˴���2"},
	{"LeverageMultiple",'N',10,4,"�ܸ˱���"},
	{"FormalFundCode",'C',6,0,"��ʽ����"},
	{"InvestAdName",'C',80,0,"Ͷ�ʹ�������"},
	{"InvestAdBusCode",'C',18,0,"Ͷ�ʹ���������ô���"},
	{"InvestAdManCode",'C',18,0,"Ͷ�ʹ���˽ļ�����˱���"},
	{"LeverageRate",'N',16,4,"�ܸ���"},
	{"SurveyMethod",'C',1,0,"�������"},
	{"GetInvestCerFlag",'C',1,0,"ȡ��Ͷ����������ʶ"},
	{"NonResiFlag",'C',1,0,"�Ǿ����ʶ"},
	{"ChineseName",'C',100,0,"��������"},
	{"EnglishFirstName2",'C',100,0,"Ӣ����2"},
	{"EnglishFamliyName2",'C',100,0,"Ӣ����2"},
	{"EnglishName",'C',200,0,"Ӣ��ȫ��"},
	{"LivingCountry",'C',3,0,"�־ӹ���"},
	{"LivingAddress",'C',300,0,"�־ӵ�ַ"},
	{"LivingAddress2",'C',300,0,"�־ӵ�ַ2"},
	{"LivingAddress3",'C',300,0,"�־ӵ�ַ3"},
	{"LivingAddress4",'C',300,0,"�־ӵ�ַ4"},
	{"BirthDate",'C',8,0,"��������"},
	{"BirthCountry",'C',3,0,"��������"},
	{"BirthCountryEngName",'C',200,0,"������Ӣ������"},
	{"BirthCity",'C',200,0,"��������"},
	{"AddressType",'C',3,0,"��ַ����"},
	{"TaxCountry",'C',3,0,"˰�վ����"},
	{"TaxID",'C',200,0,"��˰��ʶ���"},
	{"PassiveNonFinFlag",'C',1,0,"�����ǽ��ڻ�����ʶ"},
	{"HaveNonResConFlag",'C',1,0,"���ڷǾ�������˱�ʶ"},
	{"ChineseName2",'C',100,0,"��������2"},
	{"EnglishFirstName3",'C',100,0,"Ӣ����3"},
	{"EnglishFamliyName3",'C',100,0,"Ӣ����3"},
	{"ControllerType",'C',6,0,"����������"},
	{"ConNonResiFlag",'C',1,0,"�����˷Ǿ����ʶ"},
	{"ConShareRatio",'N',7,4,"�����˳ֹɱ���"},
	{"LivingCountry2",'C',3,0,"�־ӹ���2"},
	{"LivingAddress5",'C',300,0,"�־ӵ�ַ5"},
	{"LivingAddress6",'C',300,0,"�־ӵ�ַ6"},
	{"LivingAddress7",'C',300,0,"�־ӵ�ַ7"},
	{"LivingAddress8",'C',300,0,"�־ӵ�ַ8"},
	{"RegRegionCode2",'C',2,0,"����2"},
	{"BirthDate2",'C',8,0,"��������2"},
	{"BirthCountry2",'C',3,0,"��������2"},
	{"BirthCouEngName2",'C',200,0,"������Ӣ������2"},
	{"BirthCity2",'C',120,0,"��������2"},
	{"TaxCountry2",'C',3,0,"˰�վ����2"},
	{"TaxID2",'C',200,0,"��˰��ʶ���2"},
	{"Specification2",'C',60,0,"ժҪ/˵��2"},
	{"ReservedField6",'C',300,0,"Ԥ���ֶ�6"},
	
};

static int df01[]={ 4,5,6,7,8,27,72,85,92,93,98,101,106,107,108,120,121,135,19,20,21,23,28,29,48,49,51,65,69,73,83,87,88,122,124,126,127,128,136,140,164,167,169,170,171,84,142,181,182,183,265,522,524,530,282,286,287,288,289,290,291,292,293,294,295,296,325,334,335,336,337,338,339,340,341,342,343,344,302,60,58,89,90,254, };
static int df02[]={ 8,32,119,120,121,135,136,84,137,92,93,87,256,27,72,85,98,122,171,29,142,524,254,297,60,58,309, };
static int df03[]={ 8,67,80,92,93,120,121,132,134,135,136,25,28,29,37,87,90,91,98,150,195,102,89,40,137,191,192,97,52,141,142,152,123,254,34,173,260,261,264,258,24,60,58,280,281,299,147,617,524,297,526,298,269,270,271,530,301,302,303,327,328,329,395,330,345,346,347,348,307,164,275,392,393,394, };
static int df04[]={ 8,32,37,62,64,67,80,92,93,119,120,121,132,134,135,136,137,177,25,28,29,47,52,53,86,87,90,91,94,98,102,138,150,193,173,89,254,40,97,141,142,152,176,24,123,76,266,156,133,58,60,139,162,163,161,194,95,258,255,256,260,264,262,257,261,263,34,55,280,281,299,147,617,524,297,526,298,269,270,271,530,301,302,303,349,327,328,329,395,330,345,346,347,348,283,285,560,542,541,543,544,603,562,507,510,300,306,305,164,386,387,309,275,225,276,274,59,157,187,307,31, };
static int df05[]={ 13,18,32,67,120,121,136,59,87,137,173,260,264,268,274,507,510,508,527,24, };
static int df06[]={ 22,32,37,41,42,43,46,64,67,113,119,120,121,135,136,155,24,28,29,47,52,53,59,86,87,94,95,98,123,137,138,187,255,260,276,601,602,354,90,543,544, };
static int df07[]={ 63,66,67,68,86,149,555,273,180,604,605,129,37,317,24,2,3,35,36,38,39,40,70,71,78,79,82,99,100,104,105,114,130,133,151,42,113,46,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,267,308,501,502,503,504,505,556,557,609,610,611,612,613,614,615,616,535,536,304,310,331,332,333,314,315, };
static int df08[]={ 33,57,74,75,81,131, };
static int df09[]={ 42,44,50,56,67,116,121,125,139,272, };
static int df10[]={ 9,11,12,67,109,111,118,121,15,18,41,43,44,56,77,95,96,116,117,139,144,148,172,173,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250, };
static int df11[]={ 67,121,135,143,144,154,175, };
static int df12[]={ 67,121,135,143,144,153,154,174,175,178,179, };
static int df13[]={ 67,121,135,143,144,154,175, };
static int df21[]={ 324,121,326,318,47, };
static int df23[]={ 8,37,136,120,284,324,85,98,27,72,92,93,135,67,132,121,87,28,524,29,140,83,4,101,49,106,107,108,23,48,51,65,69,73,88,122,126,134,167,169,170,260,265,97,141,142,152, };
static int df24[]={ 8,37,136,120,284,324,92,93,135,67,132,62,121,32,47,87,524,29,137,119,256,260,309,52,53,86,94,173,193,255,261,313,311,316,312,349,97,141,142,152, };
static int df25[]={ 355,92,32,37,509,319,67,121,324,87,135,320,64,321,322,323,264,47, };
static int df26[]={ 13,18,32,67,120,121,136,59,87,137,173,260,264,268,274,507,510,508,527,24,618, };
static int dfC1[]={ 355,67,260,63,367,66,310,331,368,369,370,371,372,24,388,389,390,391,2,3,35,36,37,38,39,40,70,71,78,79,373,82,99,100,104,105,114,129,509,130,151,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,609,610,611,612,613,614,615,616,332,333,314,315,254,384,385,356,47, };
static int dfC2[]={ 355,67,260,121,87,375,376,377,378,382,383,379,384,385,356,47, };
static int dfC3[]={ 355,67,260,357,358,361,34,526,98,114,617,384,385,356,47, };
static int dfC4[]={ 355,67,260,113,42,46,155,601,351,352,353,254,384,385,47, };
static int dfC5[]={ 355,67,260,34,526,121,87,135,320,98,365,374,357,358,359,360,361,362,363,194,193,366,380,381,384,385,356,47, };
static int dfC6[]={ 67,260,274,618,619, };
static int dfR1[]={ 8,92,93,121,87,136,98,258,90,674,675,676,677,679,678,680,126,690,681,682,683,684,685,686,687,688,689,649,691,692,254,693,694,695,697,696,698,699,700,701,702,703,704,705,706,707,708,709,710,711,712,713,619,635,636,637,638,639,714, };
static int dfR2[]={ 8,92,32,137,119,309,635,636,637, };


struct stru_ofbdep_datafile_field ofbdep_datafile_field[]={
{"01",84,df01},
{"02",27,df02},
{"03",74,df03},
{"04",121,df04},
{"05",20,df05},
{"06",41,df06},
{"07",83,df07},
{"08",6,df08},
{"09",10,df09},
{"10",58,df10},
{"11",7,df11},
{"12",11,df12},
{"13",7,df13},
{"21",5,df21},
{"23",47,df23},
{"24",40,df24},
{"25",18,df25},
{"26",21,df26},
{"C1",76,dfC1},
{"C2",16,dfC2},
{"C3",15,dfC3},
{"C4",15,dfC4},
{"C5",28,dfC5},
{"C6",5,dfC6},
{"R1",59,dfR1},
{"R2",9,dfR2},

};

struct stru_ofbdep_datafilehead ofbdep_datafilehead[]={//�����ļ�ͷ
	{"�ļ���ʶ","OFDCFDAT",8,1,NULL,NULL},
	{"�汾��","21",4,1,NULL,NULL},
	{"���ͻ���","",9,0,NULL,NULL},
	{"���ջ���","",9,0,NULL,NULL},
	{"����","",8,0,NULL,NULL},
	{"���ܱ���","",3,0,NULL,NULL},
	{"�ļ�����","",2,1,NULL,NULL},
	{"������","",8,0,NULL,NULL},
	{"������","",8,0,NULL,NULL},
	{"�ֶ���","",3,1,NULL,NULL}
};