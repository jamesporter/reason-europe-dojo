[@bs.deriving abstract]
type geographyProps = {
  geography: string,
  projection: string,
};

[@bs.module "react-simple-maps"]
external geographyComp : ReasonReact.reactClass = "Geography";

let make = (~geography, ~projection, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=geographyComp,
    ~props=geographyProps(~geography, ~projection),
    children,
  );