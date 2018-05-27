[@bs.deriving abstract]
type geographyProps = {className: string};

[@bs.module "react-simple-maps"]
external geography : ReasonReact.reactClass = "Geography";

let make = children =>
  ReasonReact.wrapJsForReason(
    ~reactClass=geography,
    ~props=Js.Obj.empty(),
    children,
  );
  